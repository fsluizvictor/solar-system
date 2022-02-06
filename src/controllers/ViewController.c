#include "../view/DrawSolarSystem.c"
#include "../services/VisualizationService.c"

void executeView(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitContextVersion(1, 1);
    glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(1800, 1200);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Solar System");
    glutDisplayFunc(drawOrbitsSolarSystem);
    glutReshapeFunc(resize);
}
