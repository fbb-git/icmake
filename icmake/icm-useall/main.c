#include "main.ih"

int main(int argc, char **argv)
{
    Options options;
    OptionsCons(&options, argc, argv);

    Process process;
    ProcessCons(&process, &options);

    dependencies(&process);
    writeCLASSESdep(&process);
}





