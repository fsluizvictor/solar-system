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

GLfloat listTextures[11];

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

#endif