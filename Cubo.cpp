#include "Cubo.h"

Cubo::Cubo()
{}

void Cubo::DibujarCubos(float x, float y, float z, float j)
{
	glPushMatrix();
		//glScalef(2, 2, 2);
		glTranslatef(x, y, z);
		glRotatef(j, 0.0, 1.0, 1.0);
		glutSolidCube(1);
	glPopMatrix();

}