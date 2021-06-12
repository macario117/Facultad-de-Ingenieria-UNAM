//Semestre 2018 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//************* Macario Falcon Leonel					******//
//*************	Visual Studio 2017						******//
//************************************************************//
#include "Main.h"


// Variables used to calculate frames per second: (Windows)
DWORD dwFrames = 0;
DWORD dwCurrentTime = 0;
DWORD dwLastUpdateTime = 0;
DWORD dwElapsedTime = 0;

//BUDO, KILAHUEA, 
//Variables used to create movement

int sol = 0;

float camaraZ = 0.0;
float camaraX = 0.0;
int mercurio = 0.0;
int venus = 0;
int tierra = 0;
int marte = 0;
int jupiter = 0;
int saturno = 0;
int urano = 0;
int neptuno = 0;


GLfloat SunDiffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };			// Diffuse Light Values
GLfloat SunSpecular[] = { 1.0, 1.0, 1.0, 1.0 };				// Specular Light Values
GLfloat SunPosition[] = { 0.0f, 0.0f, 0.0f, 1.0f };			// Light Position

GLfloat EarthDiffuse[] = { 0.2f, 0.2f, 1.0f, 1.0f };			// Tierra
GLfloat EarthSpecular[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat EarthShininess[] = { 50.0 };

GLfloat MoonDiffuse[] = { 0.8f, 0.8f, 0.8f, 1.0f };			// Luna
GLfloat MoonSpecular[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat MoonShininess[] = { 50.0 };

GLfloat MarsDiffuse[] = { 0.14, 0.9, 0.72, 1 };			// Marte
GLfloat MarsSpecular[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat MarsShininess[] = { 50.0 };

GLfloat MARCDiffuse[] = { 1, 0.2, 0.9, 1.0f };			// MERCURIO
GLfloat MARCSpecular[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat MARCShininess[] = { 50.0 };

GLfloat VENDiffuse[] = { 0.96, 0.64, 0.2, 1 };			// VENUS
GLfloat VENSpecular[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat VENShininess[] = { 50.0 };

GLfloat JUDiffuse[] = { 0.52, 0.42, 0.14, 1.0f };			// JUPITER
GLfloat JUSpecular[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat JUShininess[] = { 50.0 };

GLfloat SADiffuse[] = { 0.5f, 0.5f, 0.5f, 1.0f };			// SATURNO
GLfloat SASpecular[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat SAShininess[] = { 50.0 };

GLfloat URDiffuse[] = { 0.14, 0.9, 0.72, 1 };			// URANO
GLfloat URSpecular[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat URShininess[] = { 50.0 };

GLfloat NEPDiffuse[] = { 0.14, 0.12, 0.83, 1 };			// NEPTUNO 
GLfloat NEPSpecular[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat NEPShininess[] = { 50.0 };

void InitGL(GLvoid)     // Inicializamos parametros
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
														//Activar luces
	glEnable(GL_LIGHTING); //Activar iluminacion 
	glEnable(GL_LIGHT1);  //primer luz activada

	glLightfv(GL_LIGHT1, GL_DIFFUSE, SunDiffuse); //parametros a la luz 1, a la misma luz uno se pasa parametros de la componente espucular 
	glLightfv(GL_LIGHT1, GL_SPECULAR, SunSpecular);
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);


}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	glTranslatef(camaraX, -6, camaraZ);			//camara
												//Sistema SOLAR
	glPushMatrix();
	//SOL

	glPushMatrix();
	glRotatef(sol, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glColor3f(1.0, 1.0, 0.0);	//Sol amarillo
	glLightfv(GL_LIGHT1, GL_POSITION, SunPosition);
	glDisable(GL_LIGHTING);
	glutSolidSphere(1.9, 12, 12);  //Draw Sun (radio,H,V);
	glEnable(GL_LIGHTING);
	glPopMatrix();

	//MERCURIO

	glPushMatrix();
	glRotatef(mercurio, 0, 1, 0);     //Traslacion Mercurio 
	glTranslatef(5, 0, 0);
	glColor3f(1, 0, 0);
	glRotatef(mercurio, 1, 0, 0);        //Rotacion Mercurio
	glMaterialfv(GL_FRONT, GL_DIFFUSE, MARCDiffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, MARCSpecular);
	glMaterialfv(GL_FRONT, GL_SHININESS, MARCShininess);
	glutWireSphere(0.5, 20, 20); // Dibujar la esfera con loneas 
	glPopMatrix();

	//VENUS 

	glPushMatrix();
	glRotatef(venus, 0, 1, 0);     //Traslacion  
	glTranslatef(8, 0, 0);
	glColor3f(0, 1, 0);
	glRotatef(venus, 1, 0, 0);        //Rotacion 
	glMaterialfv(GL_FRONT, GL_DIFFUSE, VENDiffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, VENSpecular);
	glMaterialfv(GL_FRONT, GL_SHININESS, VENShininess);
	glutWireSphere(0.6, 20, 20); // Dibujar la esfera con loneas 
	glPopMatrix();

	//TIERRA 
	glPushMatrix();
	glRotatef(tierra, 0, 1, 0);     //Traslacion  
	glTranslatef(11, 0, 0);
	//glColor3f(0, 1, 0);
	glRotatef(tierra, 1, 0, 0);        //Rotacion 
	glMaterialfv(GL_FRONT, GL_DIFFUSE, EarthDiffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, EarthSpecular);
	glMaterialfv(GL_FRONT, GL_SHININESS, EarthShininess);
	glutWireSphere(0.7, 20, 20); // Dibujar la esfera con loneas 

	glPushMatrix();//luna
	glTranslatef(0.0, -3.5, 0.0);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, MoonDiffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, MoonSpecular);
	glMaterialfv(GL_FRONT, GL_SHININESS, MoonShininess);
	glutWireSphere(0.2, 20, 20);
	glPopMatrix();

	glPopMatrix();

	//Marte
	glPushMatrix();
	glRotatef(marte, 0, 1, 0);     //Traslacion  
	glTranslatef(14, 0, 0);
	glColor3f(0, 0, 1);
	glRotatef(marte, 1, 0, 0);        //Rotacion
	glMaterialfv(GL_FRONT, GL_DIFFUSE, MarsDiffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, MarsSpecular);
	glMaterialfv(GL_FRONT, GL_SHININESS, MarsShininess);
	glutWireSphere(0.5, 20, 20); // Dibujar la esfera con loneas 
	glPopMatrix();

	//JUPITER
	glPushMatrix();
	glRotatef(jupiter, 0, 1, 0);     //Traslacion  
	glTranslatef(17, 0, 0);
	glColor3f(0, 1, 1);
	glRotatef(jupiter, 1, 0, 0);        //Rotacion 
	glMaterialfv(GL_FRONT, GL_DIFFUSE, JUDiffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, JUSpecular);
	glMaterialfv(GL_FRONT, GL_SHININESS, JUShininess);
	glutWireSphere(1, 20, 20); // Dibujar la esfera con loneas 
	glPopMatrix();

	//SATURNO 
	glPushMatrix();
	glRotatef(saturno, 0, 1, 0);     //Traslacion  
	glTranslatef(20, 0, 0);
	glColor3f(1, 1, 1);
	glRotatef(saturno, 1, 0, 0);
	glColor3f(1.0, 0.75, 0.5);
	glutWireTorus(0.3, 3, 20, 10);
	glPushMatrix();//Iapetus
	glTranslatef(0.0, -3.5, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, MoonDiffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, MoonSpecular);
	glMaterialfv(GL_FRONT, GL_SHININESS, MoonShininess);
	glutWireSphere(0.2, 20, 20);
	glPopMatrix();
	glMaterialfv(GL_FRONT, GL_DIFFUSE, SADiffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, SASpecular);
	glMaterialfv(GL_FRONT, GL_SHININESS, SAShininess);
	glutWireSphere(0.8, 20, 20); // Dibujar la esfera con loneas 
	glPopMatrix();

	//URANO
	glPushMatrix();
	glRotatef(urano, 0, 1, 0);     //Traslacion  
	glTranslatef(23, 0, 0);
	glColor3f(0.5, 1, 3);
	glRotatef(urano, 1, 0, 0);        //Rotacion 
	glMaterialfv(GL_FRONT, GL_DIFFUSE, URDiffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, URSpecular);
	glMaterialfv(GL_FRONT, GL_SHININESS, URShininess);
	glutWireSphere(0.7, 20, 20); // Dibujar la esfera con loneas 
	glPopMatrix();

	//NEPTUNO
	glPushMatrix();
	glRotatef(neptuno, 0, 1, 0);     //Traslacion  
	glTranslatef(26, 0, 0);
	glColor3f(0.82, 1, 4);
	glRotatef(neptuno, 1, 0, 0);        //Rotacion 
	glMaterialfv(GL_FRONT, GL_DIFFUSE, NEPDiffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, NEPSpecular);
	glMaterialfv(GL_FRONT, GL_SHININESS, NEPShininess);
	glutWireSphere(0.8, 20, 20); // Dibujar la esfera con loneas 
	glPopMatrix();

	glPopMatrix();
	glutSwapBuffers();


}

void animacion()
{
	// Calculate the number of frames per one second:
	//dwFrames++;
	dwCurrentTime = GetTickCount(); // Even better to use timeGetTime()
	dwElapsedTime = dwCurrentTime - dwLastUpdateTime;

	if (dwElapsedTime >= 30)
	{
		sol = (sol - 10) % 360;
		mercurio = (mercurio - 9) % 360;
		venus = (venus - 8) % 360;
		tierra = (tierra - 7) % 360;
		marte = (marte - 6) % 360;
		jupiter = (jupiter - 5) % 360;
		saturno = (saturno - 4) % 360;
		urano = (urano - 3) % 360;
		neptuno = (neptuno - 2) % 360;


		dwLastUpdateTime = dwCurrentTime;
	}

	glutPostRedisplay();
}

void reshape(int width, int height)   // Creamos funcion Reshape
{
	if (height == 0)										// Prevenir division entre cero
	{
		height = 1;
	}

	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Tipo de Vista

	glFrustum(-0.1, 0.1, -0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
														//glLoadIdentity();
}

void keyboard(unsigned char key, int x, int y)  // Create Keyboard Function
{
	switch (key) {
	case 'w':   //Movimientos de camara
	case 'W':
		camaraZ += 0.5f;
		break;
	case 's':
	case 'S':
		camaraZ -= 0.5f;
		break;
	case 'a':
	case 'A':
		camaraX -= 0.5f;
		break;
	case 'd':
	case 'D':
		camaraX += 0.5f;
		break;

	case 'i':		//Movimientos de Luz
	case 'I':

		break;
	case 'k':
	case 'K':

		break;

	case 'l':   //Activamos/desactivamos luz
	case 'L':
		break;
	case 27:        // Cuando Esc es presionado...
		exit(0);   // Salimos del programa
		break;
	default:        // Cualquier otra
		break;
	}
	glutPostRedisplay();
}

void arrow_keys(int a_keys, int x, int y)  // Funcion para manejo de teclas especiales (arrow keys)
{
	switch (a_keys) {
	case GLUT_KEY_UP:     // Presionamos tecla ARRIBA...

		break;
	case GLUT_KEY_DOWN:               // Presionamos tecla ABAJO...

		break;
	case GLUT_KEY_LEFT:

		break;
	case GLUT_KEY_RIGHT:

		break;
	default:
		break;
	}
	glutPostRedisplay();
}


int main(int argc, char** argv)   // Main Function
{
	glutInit(&argc, argv); // Inicializamos OpenGL
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
	glutInitWindowSize(500, 500);	// Tama�o de la Ventana
	glutInitWindowPosition(30, 70);	//Posicion de la Ventana
	glutCreateWindow("Practica 6"); // Nombre de la Ventana
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut funci�n de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut funci�n en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut funci�n de manejo de teclado
	glutSpecialFunc(arrow_keys);	//Otras
	glutIdleFunc(animacion);
	glutMainLoop();          // 

	return 0;
}