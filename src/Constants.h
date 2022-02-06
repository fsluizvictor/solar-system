#ifndef VARIAVEIS_H
#define VARIAVEIS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <SOIL/SOIL.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <math.h>
#include <assert.h>

#include "./entities/BitMapInfoHeader.h"

//----------------------------------KEYBOARD COMMAND CONFIGURATION------------------------------------

#define EXIT 27
#define TOP_VIEW 49
#define SIDE_VIEW 50

//----------------------------------TEXTURE CONFIGURATION------------------------------------

GLuint listTextures[11];

char *pathtextureEarth = "src/assets/2k_earth_daymap.bmp";
char *pathtextureJupiter = "src/assets/2k_jupiter.bmp";
char *pathtextureMars = "src/assets/2k_mars.bmp";
char *pathtextureMercury = "src/assets/2k_mercury.bmp";
char *pathtextureMoon = "src/assets/2k_moon.bmp";
char *pathtextureNeptune = "src/assets/2k_neptune.bmp";
char *pathtextureSaturn = "src/assets/2k_saturn.bmp";
char *pathtextureStars1 = "src/assets/2k_stars_milky_way.bmp";
char *pathtextureStars2 = "src/assets/2k_stars.bmp";
char *pathtextureSun = "src/assets/2k_sun.bmp";
char *pathtextureUranus = "src/assets/2k_uranus.bmp";
char *pathtextureVenus = "src/assets/2k_venus_surface.bmp";

//----------------------------------Constants CONFIGURATION------------------------------------

GLfloat adjusted;

GLfloat angle, fAspect;

GLfloat enviromentIlumination[] = {0, 0, 0, 1.0};
GLfloat diffuseIlunation[] = {0, 0, 0, 1.0};
GLfloat speculateIlumination[] = {0, 0, 0, 1.0};
GLfloat emissiveIlumination[] = {1.0, 0.0, 0.0, 1.0};

const GLfloat enviromentIluminationObject[] = {0.7f, 0.7f, 0.7f, 1.0f};
const GLfloat diffuseIlunationObject[] = {0.8f, 0.8f, 0.8f, 1.0f};
const GLfloat speculateIluminationObject[] = {1.0f, 1.0f, 1.0f, 1.0f};
const GLfloat autoBright[] = {100.0f};

#endif