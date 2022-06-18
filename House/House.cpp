#include <iostream>
#include <GL/glut.h>
using namespace std;
void myInit(void) {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0, 0.0, 0.0);
	glLineWidth(3.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 150, 0, 150);
}
void myDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_LOOP);
	glVertex2i(40, 40);
	glVertex2i(40, 90);
	glVertex2i(70, 120);
	glVertex2i(100, 90);
	glVertex2i(100, 40);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2i(50, 100);
	glVertex2i(50, 120);
	glVertex2i(60, 120);
	glVertex2i(60, 110);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2i(50, 40);
	glVertex2i(50, 80);
	glVertex2i(70, 80);
	glVertex2i(70, 40);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2i(80, 75);
	glVertex2i(80, 90);
	glVertex2i(90, 90);
	glVertex2i(90, 75);
	glEnd();

	glFlush();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 100);

	glutCreateWindow("Home Sweet Home");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
}