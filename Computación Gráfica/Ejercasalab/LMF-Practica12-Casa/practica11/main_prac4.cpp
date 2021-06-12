//Semestre 2018 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s):Delgadillo Cortez Hugo************//
//*************Version de Visual studio 2017         	******//
//*************											******//
//************************************************************//
#include "Main.h"

float transZ = -5.0f;
int screenW = 0.0;
int screenH = 0.0;
float roty = 0.0;

void InitGL ( void )     // Inicializamos parametros
{

	//glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glEnable(GL_LIGHTING);
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	//glEnable ( GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void prisma(void)
{
	GLfloat vertice [8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas V�rtice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas V�rtice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas V�rtice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas V�rtice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas V�rtice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas V�rtice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas V�rtice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas V�rtice 7 V7
				};

		glBegin(GL_POLYGON);	//Front
			//glColor3f(1.0,0.0,0.0);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
			//glColor3f(0.0,0.0,1.0);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			//glColor3f(0.0,1.0,0.0);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			//glColor3f(1.0,1.0,1.0);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			//glColor3f(0.4,0.2,0.6);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[2]);
			glVertex3fv(vertice[3]);
		glEnd();

		glBegin(GL_POLYGON);  //Top
			//glColor3f(0.8,0.2,0.4);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[7]);
		glEnd();
}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	//glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glTranslatef(0.0f, 0.0f, transZ);
	glRotatef(roty, 0, 1, 0);
	//Poner C�digo Aqu�.
	//cabeza
	glPushMatrix();
	glScalef(4, 4, 4);
	glColor3f(1, 1, 1);
	prisma();
	glPopMatrix();
	//cuello
	glPushMatrix();
	glTranslatef(0, -3, 0);
	glScalef(3, 2, 3);
	glColor3f(1, 0.85, 0);
	prisma();
	glPopMatrix();
	glTranslatef(0, -9, 0);
	//torso
	glPushMatrix();
	glScalef(10, 10, 3);
	glColor3f(0, 0, 1);
	prisma();
	glPopMatrix();
	glTranslatef(2.5, -7.5, 0);
	//pierna izquierda
	glPushMatrix();
	glScalef(1, 5, 3);
	glColor3f(1, 1, 0);
	prisma();
	glPopMatrix();
	glTranslatef(0, -3, 0);
	//rodilla
	glPushMatrix();
	glScalef(2, 1, 3);
	glColor3f(1, 0.66, 1);
	prisma();
	glPopMatrix();
	glTranslatef(0, -3, 0);
	//espinilla
	glPushMatrix();
	glScalef(2, 5, 3);
	glColor3f(1, 0.5, 0.5);
	prisma();
	glPopMatrix();
	glTranslatef(0, -2.75, 0);
	//tobillo
	glPushMatrix();
	glScalef(2, 0.5, 3);
	glColor3f(0.85, 0.75, 0.01);
	prisma();
	glPopMatrix();
	glTranslatef(0, -1.25, 0);
	//pie izquierdo
	glPushMatrix();
	glScalef(2, 2, 3);
	glColor3f(0.50, 0.85, 0.75);
	prisma();
	glPopMatrix();
	glTranslatef(-5, 10, 0);
	//pierna derecho
	glPushMatrix();
	glScalef(1, 5, 3);
	glColor3f(1, 1, 0);
	prisma();
	glPopMatrix();
	glTranslatef(0, -3, 0);
	//rodilla
	glPushMatrix();
	glScalef(2, 1, 3);
	glColor3f(1, 0.66, 1);
	prisma();
	glPopMatrix();
	glTranslatef(0, -3, 0);
	//espinilla
	glPushMatrix();
	glScalef(2, 5, 3);
	glColor3f(1, 0.5, 0.5);
	prisma();
	glPopMatrix();
	glTranslatef(0, -2.75, 0);
	//tobillo
	glPushMatrix();
	glScalef(2, 0.5, 3);
	glColor3f(0.85, 0.75, 0.01);
	prisma();
	glPopMatrix();
	glTranslatef(0, -1.25, 0);
	//pie derecho
	glPushMatrix();
	glScalef(2, 2, 3);
	glColor3f(0.50, 0.85, 0.75);
	prisma();
	glPopMatrix();
	glTranslatef(-3,21.5,0);
	//brazo derecho
	//hombro
	glPushMatrix();
	glScalef(1, 2, 3);
	glColor3f(0.50, 0.85, 0.75);
	prisma();
	glPopMatrix();
	glTranslatef(-2, 0, 0);
	//brazo
	glPushMatrix();
	glScalef(3, 2, 3);
	glColor3f(0.0509, 0.674, 0.058);
	prisma();
	glPopMatrix();
	glTranslatef(-1.75,0,0);
	//codo
	glPushMatrix();
	glScalef(0.5, 2, 2.5);
	glColor3f(0.87, 0.8901, 0.619);
	prisma();
	glPopMatrix();
	glTranslatef(-2.25, 0, 0);
	//antebrazo
	glPushMatrix();
	glScalef(4, 2, 3);
	glColor3f(0.188, 0.035, 0.433);
	prisma();
	glPopMatrix();
	glTranslatef(-2.25, 0, 0);
	//mu�eca
	glPushMatrix();
	glScalef(0.5, 2, 2.5);
	glColor3f(0.83, 0.66, 0.823);
	prisma();
	glPopMatrix();
	glTranslatef(-0.75, 0, 0);
	//mano
	glPushMatrix();
	glScalef(1, 2, 3);
	glColor3f(0.99, 1, 0.615);
	prisma();
	glPopMatrix();
	glTranslatef(20,0,0);
	//brazo izquierdo
	//hombro
	glPushMatrix();
	glScalef(1, 2, 3);
	glColor3f(0.50, 0.85, 0.75);
	prisma();
	glPopMatrix();
	glTranslatef(2, 0, 0);
	//brazo
	glPushMatrix();
	glScalef(3, 2, 3);
	glColor3f(0.0509, 0.674, 0.058);
	prisma();
	glPopMatrix();
	glTranslatef(1.75, 0, 0);
	//codo
	glPushMatrix();
	glScalef(0.5, 2, 2.5);
	glColor3f(0.87, 0.8901, 0.619);
	prisma();
	glPopMatrix();
	glTranslatef(2.25, 0, 0);
	//antebrazo
	glPushMatrix();
	glScalef(4, 2, 3);
	glColor3f(0.188, 0.035, 0.433);
	prisma();
	glPopMatrix();
	glTranslatef(2.25, 0, 0);
	//mu�eca
	glPushMatrix();
	glScalef(0.5, 2, 2.5);
	glColor3f(0.83, 0.66, 0.823);
	prisma();
	glPopMatrix();
	glTranslatef(0.75, 0, 0);
	//mano
	glPushMatrix();
	glScalef(1, 2, 3);
	glColor3f(0.99, 1, 0.615);
	prisma();
	glPopMatrix();

	


	


	glutSwapBuffers ( );
  // Swap The Buffers
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
  if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);	

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Tipo de Vista
	//glOrtho(-5,5,-5,5,0.2,20);	
	glFrustum (-0.1, 0.1,-0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
}

void keyboard ( unsigned char key, int x, int y )  // Create Keyboard Function
{
	switch ( key ) {
		case 'w':
		case 'W':
			transZ +=0.3f;
			break;
		case 's':
		case 'S':
			transZ -= 0.3f;
			break;
		case 'a':
		case 'A':
			
			break;
		case 'd':
		case 'D':
	
			break;
		case 27:        // Cuando Esc es presionado...
			exit ( 0 );   // Salimos del programa
		break;        
		default:        // Cualquier otra
		break;
  }
	glutPostRedisplay();
}

void arrow_keys ( int a_keys, int x, int y )  // Funcion para manejo de teclas especiales (arrow keys)
{
  switch ( a_keys ) {
    case GLUT_KEY_UP:		// Presionamos tecla ARRIBA...
		break;
    case GLUT_KEY_DOWN:		// Presionamos tecla ABAJO...
		break;
	case GLUT_KEY_LEFT:
		roty -= 0.5;
		break;
	case GLUT_KEY_RIGHT:
		roty += 0.5;
		break;
    default:
      break;
  }
  glutPostRedisplay();
}


int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  //glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitDisplayMode (GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
  screenW = glutGet(GLUT_SCREEN_WIDTH);
  screenH = glutGet(GLUT_SCREEN_HEIGHT);
  glutInitWindowSize  (500, 500);	// Tama�o de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 4"); // Nombre de la Ventana
  printf("Resolution H: %i \n", screenW);
  printf("Resolution V: %i \n", screenH);
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut funci�n de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut funci�n en caso de cambio de tamano
  glutKeyboardFunc    ( keyboard );	//Indicamos a Glut funci�n de manejo de teclado
  glutSpecialFunc     ( arrow_keys );	//Otras
  glutMainLoop        ( );          // 

  return 0;
}



