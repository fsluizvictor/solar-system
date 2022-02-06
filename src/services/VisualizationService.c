#include "../Constants.h"

// Função usada para especificar o volume de visualização
void parametersVisualization(void)
{
    // Especifica sistema de coordenadas de projeção
    glMatrixMode(GL_PROJECTION);
    // Inicializa sistema de coordenadas de projeção
    glLoadIdentity();

    // Especifica a projeção perspectiva
    gluPerspective(angle, fAspect, 0.5, 500);

    // Especifica sistema de coordenadas do modelo
    glMatrixMode(GL_MODELVIEW);
    // Inicializa sistema de coordenadas do modelo
    glLoadIdentity();

    // Especifica posição do observador e do alvo
    gluLookAt(0, 80, 200, 0, 0, 0, 0, 1, 0);
}

void resize(GLsizei w, GLsizei h)
{
    // Para previnir uma divisão por zero
    if (h == 0)
        h = 1;

    // Especifica as dimensões da viewport
    glViewport(0, 0, w, h);

    // Calcula a correção de aspecto
    fAspect = (GLfloat)w / (GLfloat)h;

    parametersVisualization();
}

void viewer()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glTranslatef(-viewerX * 0.5, -viewerY * 0.5, -viewerZ * 0.5);
    glRotatef(rotationX, 1, 0, 0);
    glRotatef(rotationY, 0, 1, 0);
    glRotatef(rotationZ, 0, 0, 1);
}

void movimentation()
{
    viewer();
    glutPostRedisplay();
}
