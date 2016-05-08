#include "main.ih"

void usage(char const *progname)
{
    rss_copyright(progname = rss_programName(progname));

    printf(
    "Usage: %s [options] args\n"
    "Where:\n"
    "   [options] - optional arguments (short options between parentheses):\n"
    "      --classes file       - use 'file' instead of 'CLASSES'\n"
    "      --gch (-g)           - write .gch dependencies in CLASSES.dep\n"
    "      --mainBase basename  - use 'basename' instead of 'main'\n"
    "      --icmconf file       - use 'file' instead of 'icmconf'\n"
    "      --help (-h)          - provide this help\n"
    "      --verbose (-V)       - show touched files; more info if "
                                                                "specified \n"
    "                             multiple times\n"
    "      --version (-v)       - show version information and terminate\n"
    "   args   - specify name(s) of files to inspect in subdirectories.\n"
    "            @ represents the sub-directory's name\n"
    "\n",
    progname);

    exit(0);
}

/****************************************
--precomp @.ih,main.ih
--inspect *.h,*.ih

First all files specified with --inspect are inspected for includes of headers
in the directories specified in CLASSES, resulting in this data structure:

                            Includes
    CLASSES dir:    dir-A dir-B dir-C ...
        dir-A                x
        dir-B                     x
        dir-C

    From this two closuresets are computed for each directory: containing per
dierectory the set of directories included by that  directory and the
opposite: the set of directories including that directory

Using the comma-separated patterns speficied at --inspect, a 
All directories mentioned in CLASSES and cwd are inspected for USE_ALL
(defined in icmconf) files.  If a directory contains a USE_ALL file then a
USE_ALL file is also created in all directories including that directory's .h
file.

When the --precomp option is specified then all not yet visited directories in
CLASSES (and the cwd) are scanned for files matching the comma-separated list
of files. 
    If the directory has already been visited then nothing happens in that
        directory. Otherwise the directory is marked as inspected.
    If no file matches the list of --precomp files then that directory has 
        been processed. 
    If the .gch file does not yet exist or if at least one of the comma
        separated patterns in --inspect is younger than the .gch file then
        this directory's .gch file must be (re)compiled
    If a gch file must be recompiled, then indicate that the gch files of
        classes depending on the gch file's class must also be recompiled. 

Once the list of gch files to recompile has been determined 
    - show the files to recompile on stdout, 
    - or rm the gch files if --rm was specified.

****************************************/
    

    

        
    
