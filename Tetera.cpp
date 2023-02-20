#include "Tetera.h"

Tetera::Tetera()
{

}

void Tetera::DibujarTetera(float x, float y, float z) {
    glPushMatrix();
        glTranslatef(x, y, z);
        glutSolidTeapot(1);
        glRotatef(180, 0, 0, 0);
    glPopMatrix();
}
