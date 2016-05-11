#include "main.ih"

int main(int argc, char **argv)
{
    UtilInit();

    OptionsCons(argc, argv);

    DependenciesCons();

    ProcessCons();
    processActions();
}





