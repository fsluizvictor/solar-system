#include "../Constants.h"

void viewerPosition(void)
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glTranslatef(-viewerX * 0.5, -viewerY * 0.5, -viewerZ * 0.5);
    glRotatef(rotationX, 1, 0, 0);
    glRotatef(rotationY, 0, 1, 0);
    glRotatef(rotationZ, 0, 0, 1);
}

void parametersVisualization(void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(angle, fAspect, 0.5, 500);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0, 80, 200, 0, 0, 0, 0, 1, 0);
    viewerPosition();
}

void resize(GLsizei w, GLsizei h)
{
    if (h == 0)
        h = 1;
    glViewport(0, 0, w, h);
    fAspect = (GLfloat)w / (GLfloat)h;
    parametersVisualization();
}

void movement()
{
    viewerPosition();
    glutPostRedisplay();
}
