
#include "Cube.h"
#include "Sphere.h"

using namespace std;

void renderScene()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();	
	gluPerspective(45.0f, 1.0f, 0.1f, 100.0f);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0.0f, 10.0f, 10.0f, 0.0f, 0.0f,  0.0f, 0.0f, 1.0f,  0.0f);

	glClearColor(1.0f,1.0f,1.0f,1.0f);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_COLOR_MATERIAL);
	glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
	
	float lightPos[4] = {-10,10,4,1};
	float lightKa[4] = {1, 1, 1, 1.0f};
	glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
	glLightfv(GL_LIGHT0, GL_AMBIENT_AND_DIFFUSE, lightKa);

	drawSphere();
	drawCube();

	glutSwapBuffers();
}
void main(int argc, char **argv) 
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(480,480);
	glutCreateWindow("Lab02");	
	glutDisplayFunc(renderScene);
	glutMainLoop();

}
