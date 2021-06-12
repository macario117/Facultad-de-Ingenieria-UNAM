
#define MAX_TOKEN_STRING_LENGTH     200 // SIMBOLOS MAXIMOS PERMITIDOS
#define MAX_BUFF                    200 // MAXIMA CANTIDAD DE CARACTERES PERMITIDOS DE ENTRADA
#define MAX_CODE					200 
#define MAX_OUTPUT_BUFF	            200

#include <ctype.h> /** a�adido para quitar warnings, previa declaracion implicita **/
#include <stdio.h>
#include <setjmp.h> // JP->RTRN functions
#include <string.h>
#include <stdlib.h>




typedef enum // DEFINITION OF BOOL TYPE
{
	false,
	true
} BOOL;

// Variables globales de entorno                                              


char ch;							 // Proximo caracter a leer
BOOL cont, debug, min, showcode;     // Funciones de depurfacion de codigo
jmp_buf start;	     	 			 // Si hay error -> vaciar pila e ir al inicio de programa
BOOL exists_false, exists_true;     // Vallidacion de True/False

// Input buffer
char buff[ MAX_BUFF ];			     // Almacenamiento de buffer de entrada
char opvalues[ MAX_BUFF ];			 // Valor en tabla de verdad para cada operador logico en la formula ingresada
int  opindex[ MAX_BUFF ];		     // Indice de referencias para los operadores en Infijo/Postfijo
int bufferpointer;                   // Apunntador dummy, busca errores, lleva la cuenta actual de caracteres

// Output buffer
char obuff[ MAX_OUTPUT_BUFF ];      // set de caracteres de salida, incluye la salida con simbolos de proplogica
int obuffpointer;                   // apuntador dummy del set de salida

int used, truevars;                  // Sets
char code[MAX_CODE];				 // Codigo a evaluar (proposicion logica)
int codeindex;                       // contador del los simbolos de proposicion logica utilizados

char token_string[MAX_TOKEN_STRING_LENGTH]; // Token string = Cadena de operadores logicos
char *tokenp = token_string;				// Apuntador de token srting

//DECLARAMOS FUNCIONES 

void factor();
void term();
void expression();
void formula();
int gen( char c );

void get_token();
void get_word();
void get_char();

void printoutputbuffer();
void printinputbuffer();
void printopvalues();
void printresult(BOOL r);
void printused();
void printcode();
void output();

void error( char* e );

// Funciones auxiliares
BOOL in( char element, int set );	// Elemento en set(c++ container style)?
BOOL atom( char c );				// c es una atomica?
//DECLARAMOS OPERACIONES

void factor() {
	int bp;
	//char dummy,dummy2;
	if ( atom( ch ) ) {
		used = used | (1 << ch - 'a');
		gen( ch );
		get_token();
	}
	else
   
		switch ( ch ) {
			case '-':
			    // definicion de negacion
				bp = bufferpointer-1;
				get_token();
				formula();
				opindex[ bp ] = gen( 'N' );
					break;
			case '(':
                // caso de parentesis
				get_token();
				formula();
				if ( ch != ')' ) error("Error, ) faltante en la proposicion.");
				get_token();
				break;

			default:
					error(" Error, no se puede realizar la operacion, no olvides terminar con un . la expresion"); /**CAMBIEN EL MENSAJE DEFAULT**/
		}
	}
void term() {
	factor();// definicion AND/Conjuncion
	while ( ch == '&' ) {
		int bp = bufferpointer-1;
		get_token();
		factor();
		opindex[ bp ] = gen( 'K' );//Generacion de simbolo exclusivo para Conjuncion
	}
}

void expression() {
	term();// definicion OR/Disyuncion
	while ( ch == 'v' ) {
		int bp = bufferpointer-1;
		get_token();
		term();
		opindex[ bp ] = gen( 'A' );// Generacion de simbolo exlusivo para Disyuncion
	}
}

void formula() {
	char c; // definicion de implicacion/bicondicional
	expression();
	if ( ch == '>' || ch == '=' ) { // aqui =
		int bp = bufferpointer-1;
			c = ch;
			get_token();
		formula();
		if      ( c == '=' ) opindex[ bp ] = gen( 'E' ); // si = es bincondicional + make simbolo exlusivo
		else if ( c == '>' ) opindex[ bp ] = gen( 'C' ); // si > es implicacion + make simbolo exlusivo
	}
}
// Generador de simbolos exlusivo
int gen( char c ) {
	code[ ++codeindex ] = c;
	return codeindex; // Indice de simbolos en expresion
}

BOOL val() {
	int x,
		t = -1;			// tope de pila
	BOOL s[100];	/**SI LES DICEN QUE COMO HACERLA DINAMICA, ES BOOL s[*pointer to MAX BUFF]**/
	// pila

	for ( x = 0; x <= codeindex; x++ ) {
		if ( atom( code[ x ] ) ) { // caso de atomica ingresada
			t++;
			s[ t ] = in( code[ x ], truevars );/** truevars ES LA FUNCION QUE CONVIERTE DE CH A OPERADORES UNARIOS
                                                    ES DECIR DE CH -> 1,0 **/
		} else { // de lo contrario, evaluar proposicion logica para cada simbolo encontrado
			switch ( code[ x ] ) {
				case 'A': // Disyuncion
					t--;
					s[ t ] = s[ t ] || s[ t+1 ]; /**AQUI ES DONDE SE REALIZAN LAS OPERACIONES LOGICAS, || = OR LOGICO
                                                    SI NO LE ENTIENDEN VEAN LA TABLA DE OPERADORES LOGICOS PARA VER COMO HACE LA EVALUACION**/
					break;
				case 'C':// Implicacion
					t--;
					/** patch**/
					if(s[t] == 1 && s[t+1] == 0){	
					s[t] = false;
					}
					else
					s[t] = true;
					//s[ t ] = s[ t ] <= s[ t+1 ]; /** <= IMPLICACION O IMP LOGICO**/
					break;
				case 'E': // Bicondicional
					t--;
					s[ t ] = s[ t ] == s[ t+1 ];/** == BICONDICIONAL O IFF LOGICO**/
					break;
				case 'K': // Conjuncion
					t--;
					s[ t ] = s[ t ] && s[ t+1 ];/** && CONJUNCION O AND LOGICO **/
					break;
				case 'N': // Negacion
					s[ t ] = ! s[ t ]; /** !  NEGACION O NOT LOGICO**/
					break;
				default:
					error("Error inesperado en val()"); // NUNCA PASA PERO HACE FALTA UN DEFAULT AQUI
			}
			int i;
        // Impresion en pantalla de valor de operadores
			for (i = 0; i < bufferpointer; i++) {    
				/* Apuntador a valor de operadores
				 impresion debajo del operador evaluado*/

				if ( opindex[ i ] == x ) opvalues[ i ] = s[ t ] + '0';
			}
		}
	}
	return s[ t ];
}
// Creacion de tabla de verdad
void table( char v ) {
	while ( ! ( in( v, used ) ) ) v++; /**HASTA QUE TODOS LOS OPERADORES/OPERANDOS SEAN USADOS.. **/
	if ( v <= 'z' ) {
		int tv = truevars; // truevars = 0,1 unicamente
		truevars = truevars | ( 1 << v - 'a' ); /** '<<' BINARY SHIFT OPERATOR , EN ESENCIA CONVIERTE DE CH A '1''0' **/
		table( v+1 );
		truevars = tv;
		table( v+1 );
	} else {
		/* salida de valor actual , obtener y realizar valores en posfijo
		de la expresion ingresada */
		char c;
		for ( c = 'a'; c <= 'z'; c++ )
			if ( in ( c, used ) ) {
				obuff[ obuffpointer ] = '0' + in( c, truevars );
				obuffpointer+=2;
			}// yabla cross-index
		BOOL v = val();
		printopvalues();
		printresult( v );

		// Verificacion de resultado final(sinopsis?)
		if ( v ) exists_true = true; else exists_false = true;

		obuff[ obuffpointer++ ] = '\n';
		printoutputbuffer();
		obuffpointer = 0;
	}
}

BOOL atom( char c ) {
	return ( c >= 'a' && c <= 'z' ) ? 1 : 0; // aqui
}

// return true  si la representacion(simbolo) del elemento esta en el set
BOOL in( char element, int set ) {
	return ( set & ( 1 << element - 'a' ) ) ? 1 : 0;
}


void get_char() {  // Obtiene de cadena de entrada, ignora espacios
	ch = getchar();
	if ( !isprint( ch ) ) ch = ' ';
	if ( bufferpointer < MAX_BUFF ){
        buff[ bufferpointer++ ] = ch;
        /** PATCH DE DOBLE OPERADOR/OPERANDO AQUI **/
        int i;
        for(i =0;i<=bufferpointer;i++){
            if(buff[i] == buff[i-1]) error("Error, doble operador u operando ingresado en la expresion...");
        }
	}
    /** END PATCH **/
	else error( "ENTRADA DEMASIADO GRANDE" );// Failsafe en caso de proposicion muy larga
}

void skip_blanks() {// El nombre indica que hace...
	do {
		get_char();
	} while ( ch == ' ');
}

void get_token() {//Busca por simbolso exclusivos de proplogica[&v->=]
	skip_blanks();
	tokenp = token_string;
	if ( isupper( ch ) ) get_word();
}

void get_word() {
	while ( isupper( ch )  ) {
		*tokenp++ = ch;
		get_char();
	}

	*tokenp = '\0';
}


void synopsis() {  //tipo de proposicion 
	if ( exists_false )
		if ( exists_true )
			printf("Contingencia\n\n");
		else
			printf("Contradicion\n\n");
	else
		printf("Tautologia\n\n");
}
//Salidas en general
void output() {
	printcode();
	printinputbuffer();
	printused();
	table('a');							  // do table
	synopsis();
}

void printcode() {
	if ( showcode ) {
		int i;
		printf("Proposicion: ");
		for ( i = 0; i <= codeindex; i++ )
			printf("%c", code[ i ]);
		printf("\n");
	}
}

void printused() {
	if ( !min ) {
		char u;
		printf("   ");
		for ( u = 'a'; u <= 'z'; u++ )
			if ( in( u, used ) ) printf("%c ", u);
	printf("\n");
	}
}

void printinputbuffer() {
	if ( !min ) printf("%s", buff );
}

void printoutputbuffer() {
	if ( !min ) {
		printf("  ");
		int i;
		for ( i = 0; i < obuffpointer; i++ )
			printf( "%c", obuff[ i ] );
	}
}

void printopvalues() {
	if ( !min ) {
		int i;
		for ( i = 0; i < bufferpointer; i++ )
			printf( "%c", opvalues[ i ] );
	}
}

void printresult(BOOL r) {
	if ( !min ) printf("%c", r + '0' );
}

void test() {
	// only prints out the int-values
	printf("used: %d\n", used);
	printf("truevars: %d\n", truevars);

	printcode();
}

void print_blanks( int n ) {  //Formato de immpresion en tabla
	int i;
	for ( i = 0; i < n; i++ )
		printf(" ");
}

void error(char* e) {
	printf( "\n%s\n", e );
	printf("%s\n", buff );		     // print input buffer
	print_blanks( bufferpointer-1 );
	printf( "^\n" );
	fflush( stdin );; //limpiar entrada de teclado
	longjmp( start, 0 ); // jp a inicio, limpiamos pila en caso de error (ASM style)
}

void init() { //inicializar 
	exists_false = exists_true = false;
	cont = true;
	codeindex = -1; // stack de simbolos
	used = truevars = 0; // init de caracteres
	used = used | ( 1 << ( 'z' - 'a' + 1 ) );		// A�adir sentinela

	bufferpointer = obuffpointer = 0;

	int i;
	for ( i = 0; i < MAX_BUFF; i++ ) {
			opvalues[ i ] = ' '; // aqui
			opindex[ i ]  = -1;
			buff[ i ]     = NULL;
	}

	for ( i = 0; i < MAX_OUTPUT_BUFF; i++ ) {
		obuff[ i ]    = ' ';
	}
}
void clean_up() {} //FUNCION LIMPRIAR

int main(int argc, char **argv) {
	/* no toquen esto, solo se uso para
	 verificar procesos de entrada/salida*/
	setjmp( start );
	do {
			system("clear");

        printf("\t--------------------------------------------------------------\n");
        printf("\t                Facultad de Igeniería                       \n\n");
        printf("\t\t\t Estructuras Discretas  \n\n");
        printf("\t--------------------------------------------------------------\n");
        printf("\n\n\t PROYECTO FINAL: OPERACIONES LOGICAS  \n\n");
		printf("\n\n\t Alumno: Leonel Macario Falcon  \n\n");
        printf("\n Ingrese expresion a evaluar usando 'a..z'\n TABLA DE SIMBOLOS:\n'&' -> conjuncion \n'v'  -> disyuncion \n'-' -> negacion \n'>' -> implicacion\n'=' -> bicondicional\n Finalice expresion con un '.'\n ");
		printf("\n\n PD: EN LINUX EL RESULTADO SALE EN LA PARTE SUPERIOR  \n\n");
		init();
		get_token();
		formula();
		if ( ch != '.' ) error("Error en la expresion...\n '(' o '.' faltantes en la expresion.");
		//system("cls");
		output();
		if ( debug ) test();
	} while ( cont );
	system("clear");
	clean_up();
	return (0);
}
