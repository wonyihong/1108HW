#pragma once
#include <GL/glut.h>


void drawCube(){
	float color[3] = {0,1,0};
	float size = 1.5;	
	float pos[3] = {3,0,0};	

	glPushMatrix();
		glTranslatef(pos[0], pos[1], pos[2]);
		glColor3f(color[0], color[1], color[2]);
		glutSolidCube(size);
	glPopMatrix();
}
