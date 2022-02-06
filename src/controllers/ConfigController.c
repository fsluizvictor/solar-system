#include "../Constants.h"
#include "../view/LoadTextures.c"

void refresh()
{
    glutPostRedisplay();
}

void initVariables()
{
    loadTexture();
}

void executeConfigs()
{
    //glutSpecialFunc(SpecialKeyboard);
    //glutKeyboardFunc(teclado);
    //glutMotionFunc(GerenciaMovimentacao);
    initVariables();

    glutIdleFunc(refresh);
    glutMainLoop();
}