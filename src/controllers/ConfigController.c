#include "../Constants.h"
#include "../services/VisualizationService.c"
#include "../services/KeyboardService.c"
#include "../view/LoadTextures.c"

void refresh()
{
    glutPostRedisplay();
}

void initVariables()
{

    rotationX = 0;
    rotationY = 0;
    rotationZ = 0;

    viewerX = 0;
    viewerY = 0;
    viewerZ = 150;

    angle = 50;
    loadTexture();
}

void executeConfigs()
{
    //glutSpecialFunc(SpecialKeyboard);
    glutKeyboardFunc(keyPressed);
    glutMotionFunc(movimentation);
    initVariables();

    glutIdleFunc(refresh);
    glutMainLoop();
}