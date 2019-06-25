/*
* Prova 2 de computação gráfica
* Autora: Isabeli Rosana Reik
* Matricula : 1611100015
* Email : isabelireik2@gmail.com
*/

#include <GL/glut.h>
#include <GL/gl.h>
#include <iostream>

GLfloat rX = 0; //variavel para rotação eixo x
GLfloat rY = 0; //variavel para rotação eixo y

// função display - desenha na tela
void display(){
	glClearColor(0.4f, 0.4f, 0.4f, 1.0f); //definição da cor de fundo
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //limpa a tela

	glLoadIdentity(); // limpa transformações feitas anteriormente
	

	glFlush();
	glutSwapBuffers();
}

void keyboard(int key, int x, int y){
	if (key == GLUT_KEY_RIGHT) {
		rY += 5;
	} else if (key == GLUT_KEY_LEFT) {
		rY -= 5;
	} else if (key == GLUT_KEY_DOWN) {
		rX -= 5;
	} else if (key == GLUT_KEY_UP) {
		rX += 5;
	}

	glutPostRedisplay();
}

int main(int argc, char **argv){
	//inicializações básicas
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(700, 700);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Prova 2 - Isabeli Reik");

	//chamadas das funções principais
	glutDisplayFunc(display);
	glutSpecialFunc(keyboard);

	glutMainLoop(); //loop main
	return 0;
}