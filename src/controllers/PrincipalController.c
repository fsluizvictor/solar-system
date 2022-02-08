#include "ViewController.c"
#include "ConfigController.c"

void execute(int argc, char *argv[])
{
    executeView(&argc, argv);
    executeConfigs();

    return 0;
}