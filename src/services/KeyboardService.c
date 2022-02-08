#include "../Constants.h"

void keyPressed(unsigned char key, int x, int y)
{
    switch (key)
    {
    case EXIT:
        exit(0);
        break;
    case TOP_VIEW:
        viewerZ = 100;
        break;
    case SIDE_VIEW:
        viewerZ = -100;
        break;
    default:
        break;
    }
    glLoadIdentity();
    gluLookAt(viewerX, viewerY, viewerZ, 0, 0, 0, 0, 1, 0);
    glutPostRedisplay();
}

void keySpecialPressed(int key, int x, int y)
{
    switch (key)
    {
    case KEY_LEFT:
        glRotatef(rotationY, 0, 1, 0);
        rotationY++;
        break;
    case KEY_RIGHT:
        glRotatef(rotationX, 1, 0, 0);
        rotationX++;
        break;
    default:
        break;
    }
}
