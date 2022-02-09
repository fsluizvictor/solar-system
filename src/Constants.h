#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <SOIL/SOIL.h>
#include <SDL/SDL.h>
#include <math.h>
#include <assert.h>

#ifndef CONSTANTS_H
#define CONSTANTS_H

#include "./entities/BitMapInfoHeader.h"

//----------------------------------KEYBOARD COMMAND CONFIGURATION------------------------------------

#define EXIT 27
#define TOP_VIEW 49
#define SIDE_VIEW 50
#define KEY_LEFT GLUT_KEY_LEFT
#define KEY_RIGHT GLUT_KEY_RIGHT

//----------------------------------TEXTURE CONFIGURATION------------------------------------

GLuint listTextures[11];

char *pathtextureEarth = "assets/earth.bmp";
char *pathtextureJupiter = "assets/jupiter.bmp";
char *pathtextureMars = "assets/mars.bmp";
char *pathtextureMercury = "assets/mercury.bmp";
char *pathtextureMoon = "assets/moon.bmp";
char *pathtextureNeptune = "assets/neptune.bmp";
char *pathtextureSaturn = "assets/saturn.bmp";
//char *pathtextureStars1 = "assets/background.bmp";
//char *pathtextureStars2 = "assets/2k_stars_milky_way.bmp";
char *pathtextureSun = "assets/sun.bmp";
char *pathtextureUranus = "assets/uranus.bmp";
char *pathtextureVenus = "assets/venus.bmp";

//----------------------------------Constants CONFIGURATION------------------------------------

GLfloat angle, fAspect;

GLfloat enviromentIlumination[] = {0, 0, 0, 1.0};
GLfloat diffuseIlunation[] = {0, 0, 0, 1.0};
GLfloat speculateIlumination[] = {0, 0, 0, 1.0};
GLfloat emissiveIlumination[] = {1.0, 0.0, 0.0, 1.0};

const GLfloat enviromentIluminationObject[] = {0.7f, 0.7f, 0.7f, 1.0f};
const GLfloat diffuseIlunationObject[] = {0.8f, 0.8f, 0.8f, 1.0f};
const GLfloat speculateIluminationObject[] = {1.0f, 1.0f, 1.0f, 1.0f};
const GLfloat autoBright[] = {100.0f};

//----------------------------------VIEWER CONFIGURATION------------------------------------

GLfloat rotationX, rotationY, rotationZ;
GLfloat viewerX, viewerY, viewerZ;

#endif