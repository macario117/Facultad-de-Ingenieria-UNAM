//Semestre 2019 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************	Macario Falcon Leonel	                ******//
//*************	DIBUJO de DuckDuckGo                    ******//
//*************	ES NECESARIA LA LIBREIRA DE figuras.h   ******//
//*************		Visual Studio 2017                  ******//
//************************************************************//
#include "Main.h"
#include "figuras.h"

CFiguras fig1;
void InitGL(GLvoid)     // Inicializamos parametros
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo

}
void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limpiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();		// Reinicializamos la actual matriz Modelview



	glPushMatrix();						//DUCKDUCKGO
	        
	         //
			 //BLANCO CUERPO
	         //

	glPushMatrix();
	glColor3f(1, 0, 0);
	glTranslatef(0, -0.1, 0);
	fig1.esfera(5.3, 100, 100, 0);
	glPopMatrix();
	   
	         glPushMatrix();
	         glColor3f(1.0, 1.0, 1.0); //blanco

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(1.36301, -4.8239, -0.2);
			 glVertex3f(1.05035, -4.86105, -0.2);
			 glVertex3f(1.2473, -4.61821, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.75379, -4.90341, -0.2);
			 glVertex3f(1.11874, -4.36109, -0.2);
			 glVertex3f(0.55216, -4.39356, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.75379, -4.90341, -0.2);
			 glVertex3f(1.11874, -4.36109, -0.2);
			 glVertex3f(1.05035, -4.86105, -0.2);
             glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(1.05035, -4.86105, -0.2);
			 glVertex3f(1.2473, -4.61821, -0.2);
			 glVertex3f(1.11874, -4.36109, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(1.11874, -4.36109, -0.2);
			 glVertex3f(0.87448, -3.89827, -0.2);
			 glVertex3f(0.55216, -4.39356, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.55216, -4.39356, -0.2);
			 glVertex3f(0.43663, -4.94142, -0.2);
			 glVertex3f(0.75379, -4.90341, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.55216, -4.39356, -0.2);
			 glVertex3f(0.87448, -3.89827, -0.2);
			 glVertex3f(0.66905, -3.83012, -0.2);
             glVertex3f(0.55216, -4.39356, -0.2);
			 glVertex3f(0.66905, -3.83012, -0.2);
			 glVertex3f(0.42897, -3.95722, -0.2);
			 glVertex3f(0.21714, -4.01371, -0.2);
			 glVertex3f(0, -4, -0.2);
			 glVertex3f(0.07272, -4.97933, -0.2);
			 glVertex3f(-0.26302, -3.95722, -0.2);
			 glVertex3f(0.55216, -4.39356, -0.2);
			 glVertex3f(0.07272, -4.97933, -0.2);
			 glVertex3f(0.55216, -4.39356, -0.2);
			 glVertex3f(0.07272, -4.97933, -0.2);
			 glVertex3f(0.43663, -4.94142, -0.2);
			 glVertex3f(0.21714, -4.01371, -0.2);
			 glVertex3f(0.42897, -3.95722, -0.2);
			 glVertex3f(0.55216, -4.39356, -0.2);
             glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.26302, -3.95722, -0.2);
			 glVertex3f(-0.41015, -4.43885, -0.2);
			 glVertex3f(0.07272, -4.97933, -0.2);
			 glVertex3f(-0.41009, -4.0419, -0.2);
			 glVertex3f(-0.41015, -4.43885, -0.2);
			 glVertex3f(-0.41009, -4.0419, -0.2);
			 glVertex3f(-0.28361, -4.95659, -0.2);
			 glVertex3f(-0.41015, -4.43885, -0.2);
			 glVertex3f(0.07272, -4.97933, -0.2);
			 glVertex3f(-0.28361, -4.95659, -0.2);
			 glVertex3f(-0.41015, -4.43885, -0.2);
			 glVertex3f(-0.6302, -4.88929, -0.2);
             glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.41015, -4.43885, -0.2);
			 glVertex3f(0.07272, -4.97933, -0.2);
			 glVertex3f(-0.41009, -4.0419, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.28361, -4.95659, -0.2);
			 glVertex3f(0.07272, -4.97933, -0.2);
			 glVertex3f(-0.41015, -4.43885, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.41009, -4.0419, -0.2);
			 glVertex3f(-0.41015, -4.43885, -0.2);
			 glVertex3f(-0.26302, -3.95722, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.64322, -4.1923, -0.2);
			 glVertex3f(-0.41015, -4.43885, -0.2);
			 glVertex3f(-0.41009, -4.0419, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.41015, -4.43885, -0.2);
			 glVertex3f(-0.6302, -4.88929, -0.2);
			 glVertex3f(-0.28361, -4.95659, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.64322, -4.1923, -0.2);
			 glVertex3f(-0.41015, -4.43885, -0.2);
			 glVertex3f(-0.6302, -4.88929, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.95501, -4.31028, -0.2);
			 glVertex3f(-0.6302, -4.88929, -0.2);
			 glVertex3f(-0.64322, -4.1923, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.95501, -4.31028, -0.2);
			 glVertex3f(-0.94089, -4.86105, -0.2);
			 glVertex3f(-0.6302, -4.88929, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.95501, -4.31028, -0.2);
			 glVertex3f(-0.94089, -4.86105, -0.2);
			 glVertex3f(-1.25403, -4.44105, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.25403, -4.44105, -0.2);
			 glVertex3f(-1.1858, -4.78979, -0.2);
			 glVertex3f(-0.94089, -4.86105, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.25403, -4.44105, -0.2);
			 glVertex3f(-1.1858, -4.78979, -0.2);
			 glVertex3f(-1.5, -4.5, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.5, -4.5, -0.2);
			 glVertex3f(-1.47753, -4.71982, -0.2);
			 glVertex3f(-1.1858, -4.78979, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.5, -4.5, -0.2);
			 glVertex3f(-1.74586, -4.67746, -0.2);
			 glVertex3f(-1.47753, -4.71982, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.94357, -4.49387, -0.2);
			 glVertex3f(-1.74586, -4.67746, -0.2);
			 glVertex3f(-1.5, -4.5, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.94357, -4.49387, -0.2);
			 glVertex3f(-1.5, -4.5, -0.2);
			 glVertex3f(-1.5, -4.5, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.94357, -4.49387, -0.2);
			 glVertex3f(-1.98593, -4.26791, -0.2);
			 glVertex3f(-1.60278, -4.26667, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.647, -3.98547, -0.2);
			 glVertex3f(-1.98593, -4.26791, -0.2);
			 glVertex3f(-1.60278, -4.26667, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.06525, -3.971, -0.2);
			 glVertex3f(-1.647, -3.98547, -0.2);
			 glVertex3f(-1.98593, -4.26791, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.06525, -3.971, -0.2);
			 glVertex3f(-1.68851, -3.56062, -0.2);
			 glVertex3f(-1.647, -3.98547, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.60278, -4.26667, -0.2);
			 glVertex3f(-1.5, -4.5, -0.2);
			 glVertex3f(-1.94357, -4.49387, -0.2);
			 glEnd();
			 //
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.647, -3.98547, -0.2);
			 glVertex3f(-2.06525, -3.97, -0.2);
			 glVertex3f(-1.68851, -3.56062, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.16316, -3.52234, -0.2);
			 glVertex3f(-2.06525, -3.971, -0.2);
			 glVertex3f(-1.68851, -3.56062, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.16316, -3.52234, -0.2);
			 glVertex3f(-1.70349, -3.03927, -0.2);
			 glVertex3f(-1.68851, -3.56062, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.25426, -3.06752, -0.2);
			 glVertex3f(-2.16316, -3.52234, -0.2);
			 glVertex3f(-1.70349, -3.03927, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.31543, -2.73522, -0.2);
			 glVertex3f(-2.25426, -3.06752, -0.2);
			 glVertex3f(-1.70349, -3.03927, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.31543, -2.73522, -0.2);
			 glVertex3f(-1.67524, -2.62973, -0.2);
			 glVertex3f(-1.70349, -3.03927, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.38136, -2.48851, -0.2);
			 glVertex3f(-2.31543, -2.73522, -0.2);
			 glVertex3f(-1.67524, -2.62973, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.4078, -2.32846, -0.2);
			 glVertex3f(-2.31543, -2.73522, -0.2);
			 glVertex3f(-1.67524, -2.62973, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.4078, -2.32846, -0.2);
			 glVertex3f(-1.67524, -2.62973, -0.2);
			 glVertex3f(-1.50751, -1.91746, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.50751, -1.91746, -0.2);
			 glVertex3f(-1.43517, -2.62973, -0.2);
			 glVertex3f(-1.67524, -2.62973, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.50751, -1.91746, -0.2);
			 glVertex3f(-0.8225, -2.04467, -0.2);
			 glVertex3f(-1.43517, -2.62973, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.8225, -2.04467, -0.2);
			 glVertex3f(-1.15272, -2.74271, -0.2);
			 glVertex3f(-1.43517, -2.62973, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.8225, -2.04467, -0.2);
			 glVertex3f(-0.87028, -2.84156, -0.2);
			 glVertex3f(-1.15272, -2.74271, -0.2);
			 glEnd();
			 //
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.8225, -2.04467, -0.2);
			 glVertex3f(-0.23535, -2.30889, -0.2);
			 glVertex3f(-0.87028, -2.84156, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.23535, -2.30889, -0.2);
			 glVertex3f(-0.58783, -2.95454, -0.2);
			 glVertex3f(-0.87028, -2.84156, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.23535, -2.30889, -0.2);
			 glVertex3f(-0.36187, -3.03927, -0.2);
			 glVertex3f(-0.58783, -2.95454, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.23535, -2.30889, -0.2);
			 glVertex3f(-0.36187, -3.03927, -0.2);
			 glVertex3f(-0.20653, -3.01103, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0, -3, -0.2);
			 glVertex3f(-0.20653, -3.01103, -0.2);
			 glVertex3f(-0.23535, -2.30889, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.25739, -2.484121, -0.2);
			 glVertex3f(-0.23535, -2.30889, -0.2);
			 glVertex3f(0, -3, -0.2);
			 glEnd();
			 
			  glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.25739, -2.48412, -0.2);
			 glVertex3f(0.41412, -2.92303, -0.2);
			 glVertex3f(0.24416, -2.94497, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.25739, -2.48412, -0.2);
			 glVertex3f(0, -3, -0.2);
			 glVertex3f(0.24416, -2.94497, -0.2);
			 glEnd();
			 //
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.48609, -1.90767, -0.2);
			 glVertex3f(-1.50751, -1.91746, -0.2);
			 glVertex3f(-2.4078, -2.32846, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.70746, -1.16652, -0.2);
			 glVertex3f(-1.50751, -1.91746, -0.2);
			 glVertex3f(-2.48609, -1.90767, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.56866, -1.53584, -0.2);
			 glVertex3f(-1.70746, -1.16652, -0.2);
			 glVertex3f(-2.48609, -1.90767, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.56866, -1.53584, -0.2);
			 glVertex3f(-3.22267, 1.69402, -0.2);
			 glVertex3f(-1.70746, -1.16652, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.70746, -1.16652, -0.2);
			 glVertex3f(-0.82416, -1.15973, -0.2);
			 glVertex3f(-1.50751, -1.91746, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.82416, -1.15973, -0.2);
			 glVertex3f(-1.50751, -1.91746, -0.2);
			 glVertex3f(-0.8225, -2.04467, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.82416, -1.15973, -0.2);
			 glVertex3f(-0.36892, -1.66253, -0.2);
			 glVertex3f(-0.8225, -2.04467, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.36892, -1.66253, -0.2);
			 glVertex3f(-0.23535, -2.30889, -0.2);
			 glVertex3f(-0.8225, -2.04467, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.23535, -2.30889, -0.2);
			 glVertex3f(0.18569, -2.27111, -0.2);
			 glVertex3f(0.25739, -2.48412, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.13969, -2.01354, -0.2);
			 glVertex3f(0.18569, -2.27111, -0.2);
			 glVertex3f(-0.23535, -2.30889, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.0753, -1.81116, -0.2);
			 glVertex3f(0.13969, -2.01354, -0.2);
			 glVertex3f(-0.23535, -2.30889, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.36892, -1.66253, -0.2);
			 glVertex3f(0.0753, -1.81116, -0.2);
			 glVertex3f(-0.23535, -2.30889, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.36892, -1.66253, -0.2);
			 glVertex3f(0.0753, -1.81116, -0.2);
			 glVertex3f(0.0385, -1.58119, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.01091, -1.37881, -0.2);
			 glVertex3f(0.0385, -1.58119, -0.2);
			 glVertex3f(-0.36892, -1.66253, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.82416, -1.15973, -0.2);
			 glVertex3f(0.01091, -1.37881, -0.2);
			 glVertex3f(-0.36892, -1.66253, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.01091, -1.16723, -0.2);
			 glVertex3f(0.01091, -1.37881, -0.2);
			 glVertex3f(-0.82416, -1.15973, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.00171, -0.93726, -0.2);
			 glVertex3f(0.01091, -1.16723, -0.2);
			 glVertex3f(-0.82416, -1.15973, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.04316, -0.76877, -0.2);
			 glVertex3f(0.00171, -0.93726, -0.2);
			 glVertex3f(-0.82416, -1.15973, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.07188, -0.65209, -0.2);
			 glVertex3f(0.04316, -0.76877, -0.2);
			 glVertex3f(-0.82416, -1.15973, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.07188, -0.65209, -0.2);
			 glVertex3f(-0.82416, -1.15973, -0.2);
			 glVertex3f(-0.22351, -0.53847, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.22351, -0.53847, -0.2);
			 glVertex3f(-0.82416, -1.15973, -0.2);
			 glVertex3f(-0.33261, -0.38695, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.33261, -0.38695, -0.2);
			 glVertex3f(-0.82416, -1.15973, -0.2);
			 glVertex3f(-0.42352, -0.193, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.42352, -0.193, -0.2);
			 glVertex3f(-0.82416, -1.15973, -0.2);
			 glVertex3f(-0.5, 0, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.15687, -0.00512, -0.2);
			 glVertex3f(-0.5, 0, -0.2);
			 glVertex3f(-0.82416, -1.15973, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.15687, -0.00512, -0.2);
			 glVertex3f(-0.82416, -1.15973, -0.2);
			 glVertex3f(-1.70746, -1.16652, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.53718, 0.41509, -0.2);
			 glVertex3f(-1.15687, -0.00512, -0.2);
			 glVertex3f(-1.70746, -1.16652, -0.2);
			 glEnd();
			 //
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.15687, -0.00512, -0.2);
			 glVertex3f(-1.89327, 0.60816, -0.2);
			 glVertex3f(-0.65141, 0.71855, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.53718, 0.41509, -0.2);
			 glVertex3f(-1.15687, -0.00512, -0.2);
			 glVertex3f(-1.89327, 0.60816, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.65141, 0.71855, -0.2);
			 glVertex3f(-1.15687, -0.00512, -0.2);
			 glVertex3f(-0.5, 0, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.65141, 0.71855, -0.2);
			 glVertex3f(-0.37503, 0.29186, -0.2);
			 glVertex3f(-0.5, 0, -0.2);
			 glEnd();
			 //
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.65141, 0.71855, -0.2);
			 glVertex3f(-0.37503, 0.29186, -0.2);
			 glVertex3f(-0.5, 0, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.65141, 0.71855, -0.2);
			 glVertex3f(-0.37503, 0.29186, -0.2);
			 glVertex3f(-0.43984, 0.80134, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.43984, 0.80134, -0.2);
			 glVertex3f(-0.37503, 0.29186, -0.2);
			 glVertex3f(-0.19321, 0.46762, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.43984, 0.80134, -0.2);
			 glVertex3f(-0.02589, 0.61736, -0.2);
			 glVertex3f(-0.19321, 0.46762, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.43984, 0.80134, -0.2);
			 glVertex3f(-0.02589, 0.61736, -0.2);
			 glVertex3f(-0.23746, 0.93932, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.23746, 0.93932, -0.2);
			 glVertex3f(-0.02589, 0.61736, -0.2);
			 glVertex3f(0.14889, 0.70935, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.23746, 0.93932, -0.2);
			 glVertex3f(0.14889, 0.70935, -0.2);
			 glVertex3f(-0.14434, 1.06792, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.14434, 1.06792, -0.2);
			 glVertex3f(0.32367, 0.79214, -0.2);
			 glVertex3f(0.14889, 0.70935, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.14434, 1.06792, -0.2);
			 glVertex3f(0.32367, 0.79214, -0.2);
			 glVertex3f(-0.07188, 1.20609, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.07188, 1.20609, -0.2);
			 glVertex3f(0.32367, 0.79214, -0.2);
			 glVertex3f(0.49845, 0.87493, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.07188, 1.20609, -0.2);
			 glVertex3f(0.49845, 0.87493, -0.2);
			 glVertex3f(-0.02808, 1.39532, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.02808, 1.39532, -0.2);
			 glVertex3f(0.49845, 0.87493, -0.2);
			 glVertex3f(0.38806, 1.35327, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.38806, 1.35327, -0.2);
			 glVertex3f(0.49845, 0.87493, -0.2);
			 glVertex3f(0.50471, 1.21615, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.50471, 1.21615, -0.2);
			 glVertex3f(0.49845, 0.87493, -0.2);
			 glVertex3f(0.60884, 1.1049, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.60884, 1.1049, -0.2);
			 glVertex3f(0.49845, 0.87493, -0.2);
			 glVertex3f(0.74682, 0.91172, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.60884, 1.1049, -0.2);
			 glVertex3f(0.74682, 0.91172, -0.2);
			 glVertex3f(0.73762, 1.03131, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.73762, 1.03131, -0.2);
			 glVertex3f(0.74682, 0.91172, -0.2);
			 glVertex3f(0.9032, 0.93932, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.73762, 1.03131, -0.2);
			 glVertex3f(0.9032, 0.93932, -0.2);
			 glVertex3f(1.08718, 0.93932, -0.2);
			 glEnd();
			 //
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.02808, 1.39532, -0.2);
			 glVertex3f(0.31454, 1.54198, -0.2);
			 glVertex3f(0.38806, 1.35327, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0, 1.6, -0.2);
			 glVertex3f(0.31454, 1.54198, -0.2);
			 glVertex3f(-0.02808, 1.39532, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0, 1.6, -0.2);
			 glVertex3f(0.31454, 1.54198, -0.2);
			 glVertex3f(0.26848, 1.72123, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0, 1.8, -0.2);
			 glVertex3f(0.26848, 1.72123, -0.2);
			 glVertex3f(0, 1.6, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0, 1.8, -0.2);
			 glVertex3f(0.26848, 1.72123, -0.2);
			 glVertex3f(0.24088, 1.88681, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0, 2, -0.2);
			 glVertex3f(0.24088, 1.88681, -0.2);
			 glVertex3f(0, 1.8, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0, 2, -0.2);
			 glVertex3f(0.24088, 1.88681, -0.2);
			 glVertex3f(0.21658, 2.071, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.03509, 2.19957, -0.2);
			 glVertex3f(0.21658, 2.071, -0.2);
			 glVertex3f(0, 2, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.03509, 2.19957, -0.2);
			 glVertex3f(0.21658, 2.071, -0.2);
			 glVertex3f(0.21328, 2.21797, -0.2);
			 glEnd();
			 //
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.89327, 0.60816, -0.2);
			 glVertex3f(-2.53718, 0.41509, -0.2);
			 glVertex3f(-2.10485, 0.60816, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.10485, 0.60816, -0.2);
			 glVertex3f(-2.53718, 0.41509, -0.2);
			 glVertex3f(-2.24283, 0.68175, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.24283, 0.68175, -0.2);
			 glVertex3f(-2.53718, 0.41509, -0.2);
			 glVertex3f(-2.36242, 0.78294, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.36242, 0.78294, -0.2);
			 glVertex3f(-2.53718, 0.41509, -0.2);
			 glVertex3f(-2.43601, 0.93932, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.43601, 0.93932, -0.2);
			 glVertex3f(-2.53718, 0.41509, -0.2);
			 glVertex3f(2.5004, 1.1049, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.5004, 1.1049, -0.2);
			 glVertex3f(-2.53718, 0.41509, -0.2);
			 glVertex3f(-3.22267, 1.69402, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.5004, 1.1049, -0.2);
			 glVertex3f(-2.53718, 0.415094, -0.2);
			 glVertex3f(-2.43601, 0.93932, -0.2);
			 glEnd();
			 //
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.5004, 1.1049, -0.2);
			 glVertex3f(-3.22267, 1.69402, -0.2);
			 glVertex3f(-2.59239, 1.81322, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.59239, 1.81322, -0.2);
			 glVertex3f(-3.22267, 1.69402, -0.2);
			 glVertex3f(-2.60618, 1.9103, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.60618, 1.9103, -0.2);
			 glVertex3f(-3.22267, 1.69402, -0.2);
			 glVertex3f(-2.71395, 1.97287, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.71395, 1.97287, -0.2);
			 glVertex3f(-3.22267, 1.69402, -0.2);
			 glVertex3f(-2.84258, 2.03892, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.84258, 2.03892, -0.2);
			 glVertex3f(-3.22267, 1.69402, -0.2);
			 glVertex3f(-2.98164, 2.1015, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.98164, 2.1015, -0.2);
			 glVertex3f(-3.22267, 1.69402, -0.2);
			 glVertex3f(-3.12593, 2.14438, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-3.12593, 2.14438, -0.2);
			 glVertex3f(-3.22267, 1.69402, -0.2);
			 glVertex3f(-3.28231, 2.16278, -0.2);
			 glEnd();
  //CABEZA
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.52793, 2.6050, -0.2);
			 glVertex3f(-2.55346, 2.76145, -0.2);
			 glVertex3f(-3.04314, 2.76071, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-3.04314, 2.76071, -0.2);
			 glVertex3f(-2.55346, 2.76145, -0.2);
			 glVertex3f(-3.22711, 2.8159, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-3.22711, 2.8159, -0.2);
			 glVertex3f(-2.55346, 2.76145, -0.2);
			 glVertex3f(-3.20448, 2.95293, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-3.20448, 2.95293, -0.2);
			 glVertex3f(-2.55346, 2.76145, -0.2);
			 glVertex3f(-3.15352, 3.15626, -0.2);
			 glEnd();
			 //
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.55346, 2.76145, -0.2);
			 glVertex3f(-2.52405, 2.89509, -0.2);
			 glVertex3f(-3.20448, 2.95293, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-3.20448, 2.95293, -0.2);
			 glVertex3f(-2.52405, 2.89509, -0.2);
			 glVertex3f(-3.15352, 3.15626, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-3.15352, 3.15626, -0.2);
			 glVertex3f(-2.52405, 2.89509, -0.2);
			 glVertex3f(-3.05768, 3.37418, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-3.05768, 3.37418, -0.2);
			 glVertex3f(-2.52405, 2.89509, -0.2);
			 glVertex3f(-2.93003, 3.59438, -0.2);
			 glEnd();
			 //
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.52405, 2.89509, -0.2);
			 glVertex3f(-2.40028, 3.03909, -0.2);
			 glVertex3f(-2.93003, 3.59438, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.93003, 3.59438, -0.2);
			 glVertex3f(-2.40028, 3.03909, -0.2);
			 glVertex3f(-2.79477, 3.78179, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.79477, 3.78179, -0.2);
			 glVertex3f(-2.40028, 3.03909, -0.2);
			 glVertex3f(-2.64758, 3.93817, -0.2);
			 glEnd();
			 //
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.40028, 3.03909, -0.2);
			 glVertex3f(-2.21837, 3.1444, -0.2);
			 glVertex3f(-2.64758, 3.93817, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.64758, 3.93817, -0.2);
			 glVertex3f(-2.21837, 3.1444, -0.2);
			 glVertex3f(-2.46729, 4.08903, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.46729, 4.08903, -0.2);
			 glVertex3f(-2.21837, 3.1444, -0.2);
			 glVertex3f(-2.30722, 4.17734, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.21837, 3.1444, -0.2);
			 glVertex3f(-1.96945, 3.19227, -0.2);
			 glVertex3f(-2.3173, 4.18796, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.3173, 4.18796, -0.2);
			 glVertex3f(-1.96945, 3.19227, -0.2);
			 glVertex3f(-2.14164, 4.26933, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.14164, 4.26933, -0.2);
			 glVertex3f(-1.96945, 3.19227, -0.2);
			 glVertex3f(-1.90243, 4.36029, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.90243, 4.36029, -0.2);
			 glVertex3f(-1.96945, 3.19227, -0.2);
			 glVertex3f(-1.68223, 4.42092, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.96945, 3.19227, -0.2);
			 glVertex3f(-1.77478, 3.17313, -0.2);
			 glVertex3f(-1.68223, 4.42092, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.68223, 4.42092, -0.2);
			 glVertex3f(-1.77478, 3.17313, -0.2);
			 glVertex3f(-1.46842, 4.47518, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.46842, 4.47518, -0.2);
			 glVertex3f(-1.77478, 3.17313, -0.2);
			 glVertex3f(-1.2546, 4.52943, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.77478, 3.17313, -0.2);
			 glVertex3f(-1.58969, 3.03909, -0.2);
			 glVertex3f(-1.2546, 4.52943, -0.2);
			 glEnd();
			 //
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.52793, 2.60507, -0.2);
			 glVertex3f(-2.422, 2.79304, -0.2);
			 glVertex3f(-2.27633, 2.51126, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.27633, 2.51126, -0.2);
			 glVertex3f(-2.422, 2.79304, -0.2);
			 glVertex3f(-2.28594, 2.9291, -0.2);
			 glEnd();
			  glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.28594, 2.9291, -0.2);
			 glVertex3f(-2.12902, 3.03271, -0.2);
			 glVertex3f(-2.27633, 2.51126, -0.2);
			 glEnd();
			  glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.27633, 2.51126, -0.2);
			 glVertex3f(-2.12902, 3.03271, -0.2);
			 glVertex3f(-1.84751, 2.5628, -0.2);
			 glEnd();
			  glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.84751, 2.5628, -0.2);
			 glVertex3f(-2.12902, 3.03271, -0.2);
			 glVertex3f(-1.9503, 3.0742, -0.2);
			 glEnd();
			  glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.9503, 3.0742, -0.2);
			 glVertex3f(-1.84751, 2.5628, -0.2);
			 glVertex3f(-1.78116, 3.071, -0.2);
			 glEnd();
			 	 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.78116, 3.071, -0.2);
			 glVertex3f(-1.84751, 2.5628, -0.2);
			 glVertex3f(-1.58969, 3.03909, -0.2);
			 glEnd();
			 
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.84751, 2.5628, -0.2);
			 glVertex3f(0.03513, 2.74946, -0.2);
			 glVertex3f(-1.58969, 3.03909, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.58969, 3.03909, -0.2);
			 glVertex3f(0.03513, 2.74946, -0.2);
			 glVertex3f(-1.2546, 4.52943, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.2546, 4.52943, -0.2);
			 glVertex3f(0.03513, 2.74946, -0.2);
			 glVertex3f(0, 4.5, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0, 4.5, -0.2);
			 glVertex3f(0.03513, 2.74946, -0.2);
			 glVertex3f(0.16872, 4.45284, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.16872, 4.45284, -0.2);
			 glVertex3f(0.03513, 2.74946, -0.2);
			 glVertex3f(0.33467, 4.40816, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.33467, 4.40816, -0.2);
			 glVertex3f(0.03513, 2.74946, -0.2);
			 glVertex3f(0.93782, 4.03797, -0.2);
			 glEnd();
			 //
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.03513, 2.74946, -0.2);
			 glVertex3f(0.94866, 2.83696, -0.2);
			 glVertex3f(0.53763, 3.04398, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.53763, 3.04398, -0.2);
			 glVertex3f(0.94866, 2.83696, -0.2);
			 glVertex3f(0.68765, 3.14299, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.68765, 3.14299, -0.2);
			 glVertex3f(0.94866, 2.83696, -0.2);
			 glVertex3f(0.85484, 3.17855, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.85484, 3.17855, -0.2);
			 glVertex3f(0.94866, 2.83696, -0.2);
			 glVertex3f(1.08968, 3.18799, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(1.08968, 3.18799, -0.2);
			 glVertex3f(0.94866, 2.83696, -0.2);
			 glVertex3f(1.26969, 3.13999, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(1.26969, 3.13999, -0.2);
			 glVertex3f(0.94866, 2.83696, -0.2);
			 glVertex3f(1.4137, 3.07098, -0.2);
			 glEnd();
			 //
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.03513, 2.74946, -0.2);
			 glVertex3f(0.53763, 3.04398, -0.2);
			 glVertex3f(0.55806, 4.31561, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.55806, 4.31561, -0.2);
			 glVertex3f(0.6, 3.2, -0.2);
			 glVertex3f(0.53763, 3.04398, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.6, 3.2, -0.2);
			 glVertex3f(0.75279, 3.31462, -0.2);
			 glVertex3f(0.55806, 4.31561, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.55806, 4.31561, -0.2);
			 glVertex3f(0.75279, 3.31462, -0.2);
			 glVertex3f(0.7623, 4.19434, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.7623, 4.19434, -0.2);
			 glVertex3f(0.75279, 3.31462, -0.2);
			 glVertex3f(0.93782, 4.03797, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.93782, 4.03797, -0.2);
			 glVertex3f(0.75279, 3.31462, -0.2);
			 glVertex3f(1.09101, 3.88479, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(1.09101, 3.88479, -0.2);
			 glVertex3f(0.75279, 3.31462, -0.2);
			 glVertex3f(1.03567, 3.335, -0.2);
			 glEnd();
			 //
			  glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(1.09101, 3.88479, -0.2);
			 glVertex3f(1.03567, 3.335, -0.2);
			 glVertex3f(1.24419, 3.66459, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(1.24419, 3.66459, -0.2);
			 glVertex3f(1.03567, 3.335, -0.2);
			 glVertex3f(1.24035, 3.2806, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(1.24419, 3.66459, -0.2);
			 glVertex3f(1.24035, 3.2806, -0.2);
			 glVertex3f(1.38141, 3.45396, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(1.38141, 3.45396, -0.2);
			 glVertex3f(1.24035, 3.2806, -0.2);
			 glVertex3f(1.26969, 3.13999, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(1.38141, 3.45396, -0.2);
			 glVertex3f(1.26969, 3.13999, -0.2);
			 glVertex3f(1.51033, 3.22985, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(1.51033, 3.22985, -0.2);
			 glVertex3f(1.26969, 3.13999, -0.2);
			 glVertex3f(1.4137, 3.07098, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(0.94866, 2.83696, -0.2);
			 glVertex3f(1.4137, 3.07098, -0.2);
			 glVertex3f(1.53204, 2.88285, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(1.53204, 2.88285, -0.2);
			 glVertex3f(1.4137, 3.07098, -0.2);
			 glVertex3f(1.58392, 3.06427, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(1.58392, 3.06427, -0.2);
			 glVertex3f(1.4137, 3.07098, -0.2);
			 glVertex3f(1.51033, 3.22985, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(1.52758, 2.89071, -0.2);
			 glVertex3f(1.65587, 2.91782, -0.2);
			 glVertex3f(1.58392, 3.06427, -0.2);
			 glEnd();
			 //COPETE 
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.20785, 4.71452, -0.2);
			 glVertex3f(-1.2546, 4.52943, -0.2);
			 glVertex3f(0, 4.5, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.20785, 4.71452, -0.2);
			 glVertex3f(-1.2546, 4.52943, -0.2);
			 glVertex3f(-0.35784, 4.84218, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.35784, 4.84218, -0.2);
			 glVertex3f(-1.2546, 4.52943, -0.2);
			 glVertex3f(-0.51741, 4.94749, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.51741, 4.94749, -0.2);
			 glVertex3f(-1.2546, 4.52943, -0.2);
			 glVertex3f(-0.68655, 5.03684, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-0.68655, 5.03684, -0.2);
			 glVertex3f(-1.2546, 4.52943, -0.2);
			 glVertex3f(-0.90994, 5.14854, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-1.10461, 5.22832, -0.2);
			 glVertex3f(-1.2546, 4.52943, -0.2);
			 glVertex3f(-0.90994, 5.14854, -0.2);
			 glEnd();
			 //
			 glBegin(GL_QUADS);
			 glVertex3f(-1.35672, 5.29853, -0.2);
			 glVertex3f(-1.10461, 5.22832, -0.2);
			 glVertex3f(-1.2546, 4.52943, -0.2);
			 glVertex3f(-1.46203, 4.5773, -0.2);
			 glEnd();
			 glBegin(GL_QUAD_STRIP);
			 glVertex3f(-1.35672, 5.29853, -0.2);
			 glVertex3f(-1.5482, 5.35278, -0.2);
			 glVertex3f(-1.46203, 4.5773, -0.2);
			 glVertex3f(-1.6449, 4.61889, -0.2);
			 glEnd();
			 glBegin(GL_QUAD_STRIP);
			 glVertex3f(-1.5482, 5.35278, -0.2);
			 glVertex3f(-1.74925, 5.39108, -0.2);
			 glVertex3f(-1.6449, 4.61889, -0.2);
			 glVertex3f(-1.81048, 4.63729, -0.2);
			 glEnd();
			 glBegin(GL_POLYGON);
			 glVertex3f(-1.74925, 5.39108, -0.2);
			 glVertex3f(-1.81048, 4.63729, -0.2);
			 glVertex3f(-1.99446, 4.66489, -0.2);
			 glVertex3f(-1.96686, 5.41, -0.2);
			 glEnd();
			 glBegin(GL_QUAD_STRIP);
			 glVertex3f(-1.96686, 5.41, -0.2);
			 glVertex3f(-2.25029, 5.43576, -0.2);
			 glVertex3f(-1.99446, 4.66489, -0.2);
			 glVertex3f(-2.18008, 4.66985, -0.2);
			 glEnd();

			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.25029, 5.43576, -0.2);
			 glVertex3f(-2.34283, 5.10705, -0.2);
			 glVertex3f(-2.18008, 4.66985, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.18008, 4.66985, -0.2);
			 glVertex3f(-2.38945, 4.67479, -0.2);
			 glVertex3f(-2.34283, 5.10705, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.34283, 5.10705, -0.2);
			 glVertex3f(-2.38945, 4.67479, -0.2);
			 glVertex3f(-2.64758, 4.98685, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.64758, 4.98685, -0.2);
			 glVertex3f(-2.38945, 4.67479, -0.2);
			 glVertex3f(-2.58319, 4.67409, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.58319, 4.67409, -0.2);
			 glVertex3f(-2.76089, 4.68261, -0.2);
			 glVertex3f(-2.64758, 4.98685, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.64758, 4.98685, -0.2);
			 glVertex3f(-2.76089, 4.68261, -0.2);
			 glVertex3f(-2.78557, 4.93166, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.78557, 4.93166, -0.2);
			 glVertex3f(-2.76089, 4.68261, -0.2);
			 glVertex3f(-2.91435, 4.78447, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.91435, 4.78447, -0.2);
			 glVertex3f(-2.76089, 4.68261, -0.2);
			 glVertex3f(-2.94195, 4.64649, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.34283, 5.10705, -0.2);
			 glVertex3f(-2.57399, 5.20762, -0.2);
			 glVertex3f(-2.25029, 5.43576, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.25029, 5.43576, -0.2);
			 glVertex3f(-2.57399, 5.20762, -0.2);
			 glVertex3f(-2.52155, 5.41342, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.52155, 5.41342, -0.2);
			 glVertex3f(-2.57399, 5.20762, -0.2);
			 glVertex3f(-2.71941, 5.38151, -0.2);
			 glEnd();
			 glBegin(GL_TRIANGLE_STRIP);
			 glVertex3f(-2.71941, 5.38151, -0.2);
			 glVertex3f(-2.57399, 5.20762, -0.2);
			 glVertex3f(-2.87578, 5.32725, -0.2);
			 glEnd();
	    glPopMatrix();

		     //
			 //VERDE MOÑO
		     //

		glPushMatrix();
		glColor3f(0.1019, 0.733, 0.16); //verde
		
		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(-1.0664, -3.56592, -0.2);
		glVertex3f(-0.39012, -3.5618, -0.2);
		glVertex3f(-0.376, -3.27935, -0.2);
		glVertex3f(-0.36187, -3.03927, -0.2);
		glVertex3f(-0.58783, -2.95454, -0.2);
		glVertex3f(-0.87028, -2.84156, -0.2);
		glVertex3f(-1.15272, -2.74271, -0.2);
		glVertex3f(-1.43517, -2.62973, -0.2);
		glVertex3f(-1.67524, -2.62973, -0.2);
		glVertex3f(-1.70349, -3.03927, -0.2);
		glVertex3f(-1.68851, -3.56062, -0.2);
		glVertex3f(-1.647, -3.98547, -0.2);
		glVertex3f(-1.60278, -4.26667, -0.2);
		glVertex3f(-1.5, -4.5, -0.2);
		glVertex3f(-1.25403, -4.44105, -0.2);
		glVertex3f(-0.95501, -4.31028, -0.2);
		glVertex3f(-0.64322, -4.1923, -0.2);
		glVertex3f(-0.41009, -4.0419, -0.2);
		glVertex3f(-0.3951, -3.86334, -0.2);
		glVertex3f(-0.39012, -3.5618, -0.2);
        glEnd();

		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(0.10626, -3.42996, -0.2);
		glVertex3f(0.60761, -3.08156, -0.2);
		glVertex3f(0.56512, -2.9456, -0.2);
		glVertex3f(0.41412, -2.92303, -0.2);
		glVertex3f(0.08926, -2.92011, -0.2);
		glVertex3f(-0.20653, -3.01103, -0.2);
		glVertex3f(-0.37389, -3.11271, -0.2);
		glVertex3f(-0.3951, -3.86334, -0.2);
		glVertex3f(-0.26302, -3.95722, -0.2);
		glVertex3f(-0.41009, -4.0419, -0.2);
		glVertex3f(-0.26302, -3.95722, -0.2);
		glVertex3f(0, -4, -0.2);
		glVertex3f(0.42897, -3.95722, -0.2);
		glVertex3f(0.66905, -3.83012, -0.2);
		glVertex3f(0.66709, -3.66789, -0.2);
		glVertex3f(0.60761, -3.08156, -0.2);
        glEnd();

		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(1.29738, -3.29903, -0.2);
		glVertex3f(2.01866, -3.38403, -0.2);
		glVertex3f(2, -3, -0.2);
		glVertex3f(1.98009, -2.74123, -0.2);
		glVertex3f(1.92867, -2.48412, -0.2);
		glVertex3f(1.80011, -2.31699, -0.2);
		glVertex3f(1.60727, -2.39412, -0.2);
		glVertex3f(1.40157, -2.52268, -0.2);
		glVertex3f(1.18302, -2.63839, -0.2);
		glVertex3f(0.99018, -2.76695, -0.2);
		glVertex3f(0.8102, -2.89551, -0.2);
		glVertex3f(0.60761, -3.08156, -0.2);
		glVertex3f(0.66709, -3.66789, -0.2);
		glVertex3f(0.66905, -3.83012, -0.2);
		glVertex3f(0.87448, -3.89827, -0.2);
		glVertex3f(1.14446, -3.96255, -0.2);
		glVertex3f(1.35015, -4.02683, -0.2);
		glVertex3f(1.54299, -4.09111, -0.2);
		glVertex3f(1.76154, -4.16825, -0.2);
		glVertex3f(1.95438, -4.16825, -0.2);
		glVertex3f(2, -4, -0.2);
		glVertex3f(1.99295, -3.70543, -0.2);
		glVertex3f(2.01866, -3.38403, -0.2);
		//glVertex3f(2, -3, -0.2);
		glEnd();
		glPopMatrix();

		     //
			 //AMARILLO PICO 
		     //
		
		glPushMatrix();
		glColor3f(1.0, 1.0, 0.0); //amarillo 

		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(3.47549, 1.12981, -0.2);
		glVertex3f(4.44479, 1.42686, -0.2);
		glVertex3f(4.2788, 1.49768, -0.2);
		glVertex3f(4.0836, 1.55024, -0.2);
		glVertex3f(3.82835, 1.57276, -0.2);
		glVertex3f(3.42371, 1.47286, -0.2);
		glVertex3f(3.17534, 1.40847, -0.2);
		glVertex3f(3.37772, 0.60816, -0.2);
		glVertex3f(3.59849, 0.70015, -0.2);
		glVertex3f(4.09862, 0.93462, -0.2);
		glVertex3f(4.27129, 1.00219, -0.2);
		glVertex3f(4.39141, 1.1148, -0.2);
		glVertex3f(4.50403, 1.26495, -0.2);
		glVertex3f(4.44479, 1.42686, -0.2);
		glEnd();
        
		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(2.76978, 0.90459, -0.2);
		glVertex3f(3.17534, 1.40847, -0.2);
		glVertex3f(2.99136, 1.36247, -0.2);
		glVertex3f(2.60501, 1.23369, -0.2);
		glVertex3f(2.50847, 1.17409, -0.2);
		glVertex3f(2.36743, 1.0656, -0.2);
		glVertex3f(2.15426, 1.0129, -0.2);
		glVertex3f(2.34744, 0.2494, -0.2);
		glVertex3f(2.53705, 0.28146, -0.2);
		glVertex3f(3.19374, 0.56216, -0.2);
		glVertex3f(3.37772, 0.60816, -0.2);
		glVertex3f(3.17534, 1.40847, -0.2);
		glEnd();

		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(1.64365, 0.49167, -0.2);
		glVertex3f(2.15426, 1.01291, -0.2);
		glVertex3f(0.95202, 0.92131, -0.2);
		glVertex3f(0.74682, 0.91172, -0.2);
		glVertex3f(0.9308, 0.18501, -0.2);
		glVertex3f(1.17917, 0.16661, -0.2);
		glVertex3f(1.36505, 0.12552, -0.2);
		glVertex3f(1.61152, 0.10222, -0.2);
		glVertex3f(1.78682, 0.10865, -0.2);
		glVertex3f(1.96647, 0.1238, -0.2);
		glVertex3f(2.34744, 0.2494, -0.2);
		glVertex3f(2.15426, 1.01291, -0.2);
		glEnd();

		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(0.12713, 0.0187, -0.2);
		glVertex3f(0.74682, 0.91172, -0.2);
		glVertex3f(0.49845, 0.87493, -0.2);
		glVertex3f(0.32367, 0.79214, -0.2);
		glVertex3f(0.14889, 0.70935, -0.2);
		glVertex3f(-0.02589, 0.61736, -0.2);
		glVertex3f(-0.19321, 0.46762, -0.2);
		glVertex3f(-0.37503, 0.29186, -0.2);
		glVertex3f(-0.5, 0, -0.2);
		glVertex3f(-0.42352, -0.193, -0.2);
		glVertex3f(-0.33261, -0.38695, -0.2);
		glVertex3f(-0.22351, -0.53847, -0.2);
		glVertex3f(-0.07188, -0.65209, -0.2);
		glVertex3f(0.04316, -0.76877, -0.2);
		glVertex3f(0.25928, -0.84527, -0.2);
		glVertex3f(0.43406, -0.94646, -0.2);
		glVertex3f(0.76191, -0.46919, -0.2);
		glVertex3f(0.64803, -0.29626, -0.2);
		glVertex3f(0.63537, -0.10224, -0.2);
		glVertex3f(0.73762, 0.08382, -0.2);
		glVertex3f(0.9308, 0.18501, -0.2);
		glVertex3f(0.74682, 0.91172, -0.2);
		glEnd();

		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(0.96797, -0.83716, -0.2);
		glVertex3f(0.76191, -0.46919, -0.2);
		glVertex3f(0.43406, -0.94646, -0.2);
		glVertex3f(0.88481, -1.06605, -0.2);
		glVertex3f(1.35395, -1.20403, -0.2);
		glVertex3f(1.39995, -0.72569, -0.2);
		glVertex3f(1.24356, -0.67969, -0.2);
		glVertex3f(1.08718, -0.65209, -0.2);
		glVertex3f(0.76191, -0.46919, -0.2);
		glEnd();

		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(2.64966, -0.94227, -0.2);
		glVertex3f(2.26465, -0.69809, -0.2);
		glVertex3f(2.10826, -1.31442, -0.2);
		glVertex3f(2.31984, -1.32362, -0.2);
		glVertex3f(2.6418, -1.26842, -0.2);
		glVertex3f(2.89937, -1.23163, -0.2);
		glVertex3f(3.19374, -1.12124, -0.2);
		glVertex3f(3.13854, -0.55091, -0.2);
		glVertex3f(2.66746, -0.63665, -0.2);
		glVertex3f(2.26465, -0.69809, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(1.76377, -1.00233, -0.2);
		glVertex3f(1.39995, -0.72569, -0.2);
		glVertex3f(1.35395, -1.20403, -0.2);
		glVertex3f(1.62695, -1.23846, -0.2);
		glVertex3f(1.8323, -1.30522, -0.2);
		glVertex3f(2.10826, -1.31442, -0.2);
		glVertex3f(2.26465, -0.6980, -0.2);
		glVertex3f(1.79006, -0.74913, -0.2);
		glVertex3f(1.39995, -0.72569, -0.2);
		glEnd();

		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(3.49801, -0.69452, -0.2);
		glVertex3f(3.13854, -0.55091, -0.2);
		glVertex3f(3.19374, -1.12124, -0.2);
		glVertex3f(3.43238, -1.03035, -0.2);
		glVertex3f(3.66861, -0.90099, -0.2);
		glVertex3f(3.81007, -0.77168, -0.2);
		glVertex3f(3.92733, -0.6254, -0.2);
		glVertex3f(3.9073, -0.52873, -0.2);
		glVertex3f(3.84686, -0.46812, -0.2);
		glVertex3f(3.68128, -0.44052, -0.2);
		glVertex3f(3.35932, -0.49571, -0.2);
		glVertex3f(3.13854, -0.55091, -0.2);
		glEnd();




		glPopMatrix();

             //LENTES 

			        //AZUL
		glPushMatrix();
		glColor3f(0.0, 0.0, 1.0); //azul

		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(0.69665, 2.4326, -0.2);
		glVertex3f(0.21328, 2.21797, -0.2);
		glVertex3f(0.57188, 2.29699, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(0.21328, 2.21797, -0.2);
		glVertex3f(0.57188, 2.29699, -0.2);
		glVertex3f(0.21658, 2.071, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(0.57188, 2.29699, -0.2);
		glVertex3f(0.53639, 2.06285, -0.2);
		glVertex3f(0.21658, 2.071, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(0.53639, 2.06285, -0.2);
		glVertex3f(0.21658, 2.071, -0.2);
		glVertex3f(0.24088, 1.88681, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(0.53639, 2.06285, -0.2);
		glVertex3f(0.5646, 1.77811, -0.2);
		glVertex3f(0.24088, 1.88681, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(0.26848, 1.72123, -0.2);
		glVertex3f(0.5646, 1.77811, -0.2);
		glVertex3f(0.24088, 1.88681, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(0.5646, 1.77811, -0.2);
		glVertex3f(0.26848, 1.72123, -0.2);
		glVertex3f(0.31454, 1.54198, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(0.61078, 1.62676, -0.2);
		glVertex3f(0.5646, 1.77811, -0.2);
		glVertex3f(0.31454, 1.54198, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(0.61078, 1.62676, -0.2);
		glVertex3f(0.38806, 1.35327, -0.2);
		glVertex3f(0.31454, 1.54198, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(0.70825, 1.47798, -0.2);
		glVertex3f(0.61078, 1.62676, -0.2);
		glVertex3f(0.38806, 1.35327, -0.2);
		glEnd();
		//
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(0.70825, 1.47798, -0.2);
		glVertex3f(0.38806, 1.35327, -0.2);
		glVertex3f(0.50471, 1.21615, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(0.70825, 1.47798, -0.2);
		glVertex3f(0.50471, 1.21615, -0.2);
		glVertex3f(0.60884, 1.1049, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(0.60884, 1.1049, -0.2);
		glVertex3f(0.73762, 1.03131, -0.2);
		glVertex3f(0.70825, 1.47798, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(0.70825, 1.47798, -0.2);
		glVertex3f(0.73762, 1.03131, -0.2);
		glVertex3f(0.87756, 1.38307, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(0.87756, 1.38307, -0.2);
		glVertex3f(0.73762, 1.03131, -0.2);
		glVertex3f(1.08718, 1.37167, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(1.08718, 1.37167, -0.2);
		glVertex3f(0.95202, 0.92131, -0.2);
		glVertex3f(0.73762, 1.03131, -0.2);
		glEnd();

		//
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(0.95202, 0.92131, -0.2);
		glVertex3f(1.46152, 0.93541, -0.2);
		glVertex3f(1.08718, 1.37167, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(1.08718, 1.37167, -0.2);
		glVertex3f(1.46152, 0.93541, -0.2);
		glVertex3f(2.08987, 1.43606, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(2.08987, 1.43606, -0.2);
		glVertex3f(1.46152, 0.93541, -0.2);
		glVertex3f(2.15426, 1.01291, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(2.15426, 1.01291, -0.2);
		glVertex3f(2.36743, 1.0656, -0.2);
		glVertex3f(2.08987, 1.43606, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(2.08987, 1.43606, -0.2);
		glVertex3f(2.36743, 1.0656, -0.2);
		glVertex3f(2.32904, 1.65684, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(2.32904, 1.65684, -0.2);
		glVertex3f(2.36743, 1.0656, -0.2);
		glVertex3f(2.50847, 1.17409, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(2.50847, 1.17409, -0.2);
		glVertex3f(2.32904, 1.65684, -0.2);
		glVertex3f(2.59527, 1.43447, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(2.59527, 1.43447, -0.2);
		glVertex3f(2.32904, 1.65684, -0.2);
		glVertex3f(2.62782, 1.65688, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(2.62782, 1.65688, -0.2);
		glVertex3f(2.32904, 1.65684, -0.2);
		glVertex3f(2.34744, 1.942, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(2.34744, 1.942, -0.2);
		glVertex3f(2.62239, 2.48685, -0.2);
		glVertex3f(2.30776, 2.476, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(2.62239, 2.48685, -0.2);
		glVertex3f(2.34744, 1.942, -0.2);
		glVertex3f(2.62782, 1.65688, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(2.30776, 2.476, -0.2);
		glVertex3f(2.58442, 2.64959, -0.2);
		glVertex3f(2.62239, 2.48685, -0.2);
		glEnd();

		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(2.17266, 2.57673, -0.2);
		glVertex3f(2.30776, 2.476, -0.2);
		glVertex3f(2.58442, 2.64959, -0.2);
		glVertex3f(2.5139, 2.8069, -0.2);
		glVertex3f(2.40541, 2.90997, -0.2);
		glVertex3f(2.20945, 2.96308, -0.2);
		glVertex3f(2.02026, 2.9371, -0.2);
		glVertex3f(1.96108, 2.61353, -0.2);
		glEnd();

		glBegin(GL_QUAD_STRIP);
		glVertex3f(1.96108, 2.61353, -0.2);
		glVertex3f(-1.93926, 2.18118, -0.2);
		glVertex3f(2.02026, 2.9371, -0.2);
		glVertex3f(-1.84751, 2.5628, -0.2);
        glEnd();

		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(0.03513, 2.74946, -0.2);
		glVertex3f(-0.03509, 2.19957, -0.2);
		glVertex3f(0.21328, 2.21797, -0.2);
		glVertex3f(0.69665, 2.4326, -0.2);
		glEnd();

		glBegin(GL_QUADS);
		glVertex3f(-2.59239, 1.81322, -0.2);
		glVertex3f(-2.16924, 1.86841, -0.2);
		glVertex3f(-2.06805, 1.25208, -0.2);
		glVertex3f(-2.5004, 1.1049, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(-2.27633, 2.51126, -0.2);
		glVertex3f(-1.84751, 2.5628, -0.2);
		glVertex3f(-1.93926, 2.18118, -0.2);
		glEnd();

		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(-2.17844, 2.06159, -0.2);
		glVertex3f(-1.93926, 2.18118, -0.2);
		glVertex3f(-2.27633, 2.51126, -0.2);
		glVertex3f(-2.60618, 1.9103, -0.2);
		glVertex3f(-2.59239, 1.81322, -0.2);
		glVertex3f(-2.16924, 1.86841, -0.2);
		glEnd();

		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(-1.98858, 1.11578, -0.2);
		glVertex3f(-2.06805, 1.25208, -0.2);
		glVertex3f(-2.5004, 1.1049, -0.2);
		glVertex3f(-2.43601, 0.93932, -0.2);
		glVertex3f(-2.36242, 0.78294, -0.2);
		glVertex3f(-2.24283, 0.68175, -0.2);
		glVertex3f(-2.10485, 0.60816, -0.2);
		glVertex3f(-1.89327, 0.60816, -0.2);
		glVertex3f(-1.77368, 1.05891, -0.2);
		glEnd();

		glBegin(GL_QUAD_STRIP);
		glVertex3f(-1.89327, 0.60816, -0.2);
		glVertex3f(-0.65141, 0.71855, -0.2);
		glVertex3f(-1.77368, 1.05891, -0.2);
		glVertex3f(-0.83539, 1.1325, -0.2);
		glEnd();

		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(-0.65141, 1.17849, -0.2);
		glVertex3f(-0.83539, 1.1325, -0.2);
		glVertex3f(-0.65141, 0.71855, -0.2);
		glVertex3f(-0.43984, 0.80134, -0.2);
		glVertex3f(-0.23746, 0.93932, -0.2);
		glVertex3f(-0.39384, 1.37167, -0.2);
        glEnd();
		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(-0.39384, 1.37167, -0.2);
		glVertex3f(-0.43984, 0.80134, -0.2);
		glVertex3f(-0.23746, 0.93932, -0.2);
		glVertex3f(-0.14434, 1.06792, -0.2);
		glVertex3f(-0.07188, 1.20609, -0.2);
		glVertex3f(-0.02808, 1.39532, -0.2);
		glVertex3f(-0.32945, 1.67523, -0.2);
		glEnd();

		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(-0.36625, 1.89601, -0.2);
		glVertex3f(-0.32945, 1.67523, -0.2);
		glVertex3f(-0.02808, 1.39532, -0.2);
		glVertex3f(0, 1.6, -0.2);
		glVertex3f(0, 1.8, -0.2);
		glVertex3f(0, 2, -0.2);
		glVertex3f(-0.03509, 2.19957, -0.2);
		glVertex3f(-0.40581, 2.11407, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(-0.40581, 2.11407, -0.2);
		glVertex3f(-0.03509, 2.19957, -0.2);
		glVertex3f(-0.52263, 2.25477, -0.2);
		glEnd();
		glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(-0.52263, 2.25477, -0.2);
		glVertex3f(-0.03509, 2.19957, -0.2);
		glVertex3f(0.03513, 2.74946, -0.2);
		glEnd();

		glBegin(GL_QUAD_STRIP);
		glVertex3f(-3.28231, 2.16278, -0.2);
		glVertex3f(-2.60618, 1.9103, -0.2);
		glVertex3f(-3.40189, 2.8159, -0.2);
		glVertex3f(-2.27633, 2.51126, -0.2);
		glEnd();

		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(-3.40438, 2.07458, -0.2);
		glVertex3f(-3.28231, 2.16278, -0.2);
		glVertex3f(-3.40189, 2.8159, -0.2);
		glVertex3f(-3.62679, 2.8069, -0.2);
		glVertex3f(-3.8275, 2.66586, -0.2);
		glVertex3f(-3.91429, 2.46515, -0.2);
		glVertex3f(-3.47529, 1.89291, -0.2);

		glEnd();
		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(-3.7951, 1.84534, -0.2);
		glVertex3f(-3.47529, 1.89291, -0.2);
		glVertex3f(-3.91429, 2.46515, -0.2);
		glVertex3f(-4.03662, 1.77642, -0.2);
		glVertex3f(-3.99329, 1.51951, -0.2);
		glVertex3f(-3.85423, 1.42012, -0.2);
		glVertex3f(-3.69431, 1.40273, -0.2);
		glVertex3f(-3.58306, 1.47922, -0.2);
		glVertex3f(-3.52396, 1.6287, -0.2);
		glVertex3f(-3.47529, 1.89291, -0.2);
		glVertex3f(-3.91429, 2.46515, -0.2);
		glEnd();










		glPopMatrix();
	
	glPopMatrix();


	glFlush();
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

	// Ortogonal
	glOrtho(-8, 8, -8.5, 8.5, 0.1, 2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();
}
void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27: exit(0);
		break;
	}
	glutPostRedisplay();
}

int main(int argc, char** argv)   // Main Function
{
	glutInit(&argc, argv); // Inicializamos OpenGL
	glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
	glutInitWindowSize(600, 600);	// Tamaño de la Ventana
	glutInitWindowPosition(0, 0);	//Posicion de la Ventana
	glutCreateWindow("Practica 2"); // Nombre de la Ventana
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut función de manejo de teclado
	glutMainLoop();          // 

	return 0;
}
