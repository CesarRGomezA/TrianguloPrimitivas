// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <stdio.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include<iostream>
#include<math.h>

using namespace std;


void dibujarSol() {
	glBegin(GL_POLYGON);


	glColor3f(1, 0.8, 0);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.2*cos(i*3.14159/180.0) - 0.8, 0.2* sin((double)i*3.14159/180.0) +0.8, 0);
	}
	glEnd();

}


void dibujarNuve1() {
	glBegin(GL_POLYGON);

	glColor3f(0.2, 0.8, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1*cos(i*3.14159 / 180.0) - 0.1, 0.1* sin((double)i*3.14159 / 180.0) + 0.4, 0);
	}
	glColor3f(0.2, 0.8, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1*cos(i*3.14159 / 180.0) - 0.2, 0.1* sin((double)i*3.14159 / 180.0) + 0.4, 0);
	}
	glColor3f(0.2, 0.8, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1*cos(i*3.14159 / 180.0) - 0.3, 0.1* sin((double)i*3.14159 / 180.0) + 0.4, 0);
	}

	glEnd();
}

void dibujarNuve2() {
	glBegin(GL_POLYGON);

	glColor3f(0.2, 0.8, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1*cos(i*3.14159 / 180.0) + 0.4, 0.1* sin((double)i*3.14159 / 180.0) + 0.7, 0);
	}
	glColor3f(0.2, 0.8, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1*cos(i*3.14159 / 180.0) + 0.5, 0.1* sin((double)i*3.14159 / 180.0) + 0.7, 0);
	}
	glColor3f(0.2, 0.8, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1*cos(i*3.14159 / 180.0) + 0.6, 0.1* sin((double)i*3.14159 / 180.0) + 0.7, 0);
	}

	glEnd();
}

void dibuajarTronco1() {
	glBegin(GL_POLYGON);
	glColor3f(0.50, 0.30, 0);

	glVertex3f(-0.83, -0.3, 0);
	glVertex3f(-0.63, -0.3, 0);
	glVertex3f(-0.57, -0.5, 0);
	glVertex3f(-0.88, -0.5, 0);
	glVertex3f(-0.83, -0.3, 0);

	glBegin(GL_QUADS);
	glColor3f(0.50, 0.30, 0);

	glVertex3f(-0.83, -0.3, 0);
	glVertex3f(-0.63, -0.3, 0);
	glVertex3f(-0.63, 0.1, 0);
	glVertex3f(-0.83, 0.1, 0);
	glVertex3f(-0.83, -0.3, 0);
	
	glEnd();
}

void dibuajarTronco2() {

	glBegin(GL_QUADS);
	glColor3f(0.50, 0.30, 0);

	glVertex3f(-0.83, -0.3, 0);
	glVertex3f(-0.63, -0.3, 0);
	glVertex3f(-0.63, 0.1, 0);
	glVertex3f(-0.83, 0.1, 0);
	glVertex3f(-0.83, -0.3, 0);

	glEnd();
}


void dibujarHojasArbol() {
	glBegin(GL_POLYGON);

	glColor3f(0, 0.5,0);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.15*cos(i*3.14159 / 180.0) - 0.74, 0.15* sin((double)i*3.14159 / 180.0) + .17, 0);
	}
	glColor3f(0, 0.5, 0);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.15*cos(i*3.14159 / 180.0) - 0.8, 0.15* sin((double)i*3.14159 / 180.0) + .07, 0);
	}
	glColor3f(0, 0.5, 0);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.15*cos(i*3.14159 / 180.0) - 0.67, 0.15* sin((double)i*3.14159 / 180.0) + .07, 0);
	}

	glEnd();
}

void dibujarPasto() {
	glBegin(GL_QUADS);

	glColor3f(0.25, 0.65, 0.2);
	glVertex3f(1, -1, 0);
	glColor3f(0.25, 0.65, 0.2);
	glVertex3f(1, -0.5, 0);
	glColor3f(0.25, 0.65, 0.2);
	glVertex3f(-1, -0.5, 0);
	glColor3f(0.25, 0.65, 0.2);
	glVertex3f(-1, -1, 0);
	glEnd();
}

void dibujarCasa() {
	glBegin(GL_QUADS);

	glColor3f(0.8, 0.2, 0.2);
	glVertex3f(0.8, -0.5, 0);
	glVertex3f(0.8, 0.2, 0);
	glVertex3f(0.3, 0.2, 0);
	glVertex3f(0.3, -0.5, 0);
	glEnd();
}

void dibujarVentanaD() {
	glBegin(GL_QUADS);

	glColor3f(0.4, 0.8, 1);
	glVertex3f(0.47, -0.09, 0);
	glVertex3f(0.47, 0.09, 0);
	glVertex3f(0.35, 0.09, 0);
	glVertex3f(0.35, -0.09, 0);
	glEnd();
}

void dibujarVentanaI() {
	glBegin(GL_QUADS);

	glColor3f(0.4, 0.8, 1);
	glVertex3f(0.7, -0.09, 0);
	glVertex3f(0.7, 0.09, 0);
	glVertex3f(0.56, 0.09, 0);
	glVertex3f(0.56, -0.09, 0);
	glEnd();
}

void dibujarTecho() {
	glBegin(GL_TRIANGLES);

	glColor3f(0.5, 0.5, 0.5);
	glVertex3f(0.8, 0.2, 0);
	glVertex3f(0.3, 0.2, 0);
	glVertex3f(0.5, 0.5, 0);
	glEnd();
}

void dibujarPuerta() {
	glBegin(GL_QUADS);

	glColor3f(1, 1, 0);
	glVertex3f(0.55, -0.5, 0);
	glVertex3f(0.55, -0.3, 0);
	glVertex3f(0.45, -0.3, 0);
	glVertex3f(0.45, -0.5, 0);
	glEnd();
}



void dibujar() {
	dibujarSol();
	dibujarNuve1();
	dibujarNuve2();
	dibuajarTronco1();
	dibuajarTronco2();
	dibujarHojasArbol();
	dibujarPasto();
	dibujarCasa();
	dibujarVentanaD();
	dibujarVentanaI();
	dibujarTecho();
	dibujarPuerta();
}




void actualizar() {


}



int main()
{
	//Declaramos apuntador de ventana
	GLFWwindow *window;

	//Si no se pudo iniciar glfw
	//terminamos ejecución 
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}
	
	//Si se pudo inciar GLFW
	//Entonces inicializamos la ventana

	window = glfwCreateWindow(1024, 768, "Ventana", NULL, NULL);

	//Si no podemos iniciar la ventana 
	//Entonces terminamos ejecucion
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	//Establecer el contexto
	glfwMakeContextCurrent(window);


	//Una vez establecido el contexto
	//Activamos fnciones modernas
	glewExperimental = true;
	GLenum errorGlew = glewInit();
	if (errorGlew != GLEW_OK)
	{
		cout << glewGetErrorString(errorGlew);

	}


	const GLubyte *versionGL =
		glGetString(GL_VERSION);
	cout << "Version OpenGL: "
		<< versionGL;



	//ciclo de dibujo (Draw loop)
	while (!glfwWindowShouldClose(window))
	{
		glViewport(0, 0,1024, 768);
		//Establecer el color de orrado
		glClearColor(0, 0.3, 0.5, 1);
		//Borramos
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		//Rutina de dibujo
		dibujar();
		actualizar();

		//Cambiar los buffers
		glfwSwapBuffers(window);
		//Reconocer si hay entradas
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();

    return 0;
}

