#include "main.ih"

// Uncomment all commented out code if you want to use Bobcat's Arg class to
// handle command-line options and arguments. (cf. man -e bobcat arg)
// If you don't want to use Bobcat's Arg class all the commented out lines can
// safely be removed.

//#include <bobcat/arg>
//using namespace FBB;
//
//namespace
//{
//    Arg::LongOption longOptions[] =
//    {
//        Arg::LongOption("help", 'h'),
//        Arg::LongOption("version", 'v'),
//    };
//
//    Arg::LongOption const *const longEnd =
//                    longOptions +
//                    sizeof(longOptions) / sizeof(Arg::LongOption);
//}

int main(int argc, char **argv)
try
{
//    Arg &arg = Arg::initialize("hv", longOptions, longEnd, argc, argv);

    return 0;
}
//catch(Errno const &err)
//{
//    cerr << err.what() << endl;
//    return err.which();
//}
catch (...)
{
    return 1;
}
