#include "../Constants.h"

void drawPlanet(char *planet, GLuint texture[], float pos_y, float pos_x, float scale, float diameter, float radius)
{
    float t = glutGet(GLUT_ELAPSED_TIME) / 1000.0;
    float a = t * 2;

    glPushMatrix();
    glRasterPos2f(0, -pos_y);
    glutBitmapString(GLUT_BITMAP_9_BY_15, planet);
    glTranslated(0, -pos_y, 0);
    // Movimento de Translação
    glTranslatef((pos_x * cos(2.0 * 3.14 * a * radius / 100)), (pos_y + pos_y * sin(2.0 * 3.14 * a * radius / 100)), 0);
    GLUquadric *obj = gluNewQuadric();
    gluQuadricTexture(obj, GL_TRUE);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture);
    glScalef(scale, scale, scale);
    glRotated(a * 20, 0, 0, 1);
    gluSphere(obj, diameter, 25, 25);
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();
}

void drawOrbit(float pos_y, float pos_x)
{
    int i;
    glPushMatrix();
    glTranslated(0, -pos_y, 0);
    glBegin(GL_LINE_LOOP);
    for (i = 0; i < 100; i++)
    {
        glVertex2f(pos_x * cos(2.0 * 3.14 * i / 100),
                   pos_y + pos_y * sin(2.0 * 3.14 * i / 100));
    }
    glEnd();
    glPopMatrix();
}

void drawSolarSystem()
{
    float t = glutGet(GLUT_ELAPSED_TIME) / 1000.0;
    float a = t;
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glShadeModel(GL_SMOOTH);

    // Propriedades da fonte de luz
    glLightfv(GL_LIGHT0, GL_AMBIENT, enviromentIlumination);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuseIlunation);
    glLightfv(GL_LIGHT0, GL_SPECULAR, speculateIlumination);
    glLightfv(GL_LIGHT0, GL_POSITION, emissiveIlumination);

    glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_TRUE);

    glDisable(GL_LIGHTING);
    glDisable(GL_LIGHT0);

    glPushMatrix();
    glRasterPos2f(0, 1.5);
    glutBitmapString(GLUT_BITMAP_9_BY_15, "Sol");
    GLUquadric *qobj = gluNewQuadric();
    gluQuadricTexture(qobj, GL_TRUE);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, listTextures[0]);
    glMaterialfv(GL_FRONT, GL_AMBIENT, enviromentIluminationObject);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuseIlunationObject);
    glMaterialfv(GL_FRONT, GL_SPECULAR, speculateIlumination);
    glMaterialfv(GL_FRONT, GL_SHININESS, autoBright);
    glRotated(a * 7, 0, 0, 1);
    glScalef(3, 3, 3);
    gluSphere(qobj, 1, 25, 25);
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);

    drawPlanet("Mercúrio", listTextures[1], 7, 7, 2, 0.48, 3.7);       // MERCÚRIO
    drawPlanet("Venus", listTextures[2], 17, 17, 1.2, 1.21, 2.5);      // VẼNUS
    drawPlanet("Terra", listTextures[3], 27, 27, 1.2, 1.27, 0.5);      // TERRA
    drawPlanet("Marte", listTextures[4], 41, 41, 1.2, 0.68, 0.5);      // MARTE
    drawPlanet("Jupiter", listTextures[5], 80, 80, 1.5, 1.43, 0.25);   // JÚPITER
    drawPlanet("Saturno", listTextures[6], 97, 97, 1.5, 1.2, 0.25);    // SATURNO
    drawPlanet("Urano", listTextures[7], 107, 107, 1.5, 0.51, 0.25);   // URANO
    drawPlanet("Netuno", listTextures[8], 127, 127, 1.5, 0.495, 0.20); // NETUNO
}

void showOrbits()
{
    drawOrbit(7, 7);     // MERCÚRIO
    drawOrbit(17, 17);   // VÊNUS
    drawOrbit(27, 27);   // TERRA
    drawOrbit(41, 41);   // MARTE
    drawOrbit(80, 80);   // JÚPITER
    drawOrbit(97, 97);   // SATURNO
    drawOrbit(107, 107); // URANO
    drawOrbit(127, 127); // NETUNO
}

void orbitsSolarSystem()
{
    glDrawBuffer(GL_BACK);
    // Limpa a janela de visualizao com a cor de fundo especificada
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    drawSolarSystem();
    glColor3f(0.0, 1.0, 1.0);
    showOrbits();
    glutSwapBuffers();
}

void draw()
{
    glDrawBuffer(GL_BACK);
    // Limpa a janela de visualizao com a cor de fundo especificada
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    drawSolarSystem();
    glutSwapBuffers();
}
