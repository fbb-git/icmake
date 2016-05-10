#include "main.ih"

int main(int argc, char **argv)
{
    UtilInit();

    Options *options = OptionsCons(argc, argv);

    Dependencies *dependencies = DependenciesCons(options);

    Process *process = ProcessCons(options, dependencies);
    actions(process);
}





