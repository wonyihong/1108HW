#pragma once

#include <GL/glut.h>

void drawSphere(){
	float color[3] = {1,0,0};
	float pos[3] = {-1.5,0,0};
	float size = 0.5;

	glPushMatrix();
		glTranslatef(pos[0], pos[1], pos[2]);
		glColor3f(color[0], color[1], color[2]);
		glutSolidSphere(size, 100, 100);
	glPopMatrix();
}

