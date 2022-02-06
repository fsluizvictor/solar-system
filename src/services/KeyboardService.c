#include "../Constants.h"

void keyPressed(unsigned char key, int x, int y)
{
    switch (key)
    {
    case EXIT:
        exit(0);
        break;
    case TOP_VIEW:
        viewerZ = 1000;
        break;
    case SIDE_VIEW:
        viewerZ = -1000;
        break;
    default:
        break;
    }
    glLoadIdentity();
    gluLookAt(viewerX, viewerY, viewerZ, 0, 0, 0, 0, 1, 0);
    glutPostRedisplay();
}
