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

    angle = 100;
    loadTexture();
}

void executeConfigs()
{

    glutReshapeFunc(resize);
    glutSpecialFunc(keySpecialPressed);
    glutKeyboardFunc(keyPressed);
    glutMotionFunc(movement);

    initVariables();

    glutIdleFunc(refresh);
    glutMainLoop();
}