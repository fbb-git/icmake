#include "main.ih"

void usage(char const *progname)
{
    rss_copyright(progname = rss_programName(progname));

    printf(
    "Usage: %s [options] [go]\n"
    "Where:\n"
    "   [options] - optional arguments (short options between parentheses):\n"
    "      --classes (-c) file  - file defining the class-subdirectories ("
                                                            "CLASSES)\n"
    "      --gch                - inspect/remove .gch precompiled headers,\n"
    "                             otherwise: don't handle precompiled "
                                                            "headers.\n"
    "      --help (-h)          - provide this help (also if neither --dry\n"
    "                             nor --go was specified)\n"
    "      --icmconf (-i) file  - icmconf file to use (icmconf)\n"
    "      --mainih (-m) ihfile - the top directory's main .ih file "
                                                            "(main.ih)\n"
    "      --no-gch             - do not inspect .gch precompiled headers.\n"
    "      --no-use-all         - do not inspect USE_ALL files\n"
    "      --use-all file       - use 'file' as USE_ALL filename, and add "
                                                            "implied\n"
    "                             'file' files where necessary\n"
    "      --verbose (-V)       - show touched files; more info if "
                                                                "specified \n"
    "                             multiple times\n"
    "      --version (-v)       - show version information and terminate\n"
    "\n"
    "When neither --gch nor --no-gch is specified icmonf's PRECOMP "
                                                            "specification\n"
    "is used;\n"
    "When neither --use-all nor --no-use-all is specified icmonf's USE_ALL\n"
    "specification is used.\n"
    "\n"
    "Files are only changed if the program argument 'go' (without the "
                                                                "quotes)\n"
    "is provided\n"
    "\n",
    progname);

    exit(0);
}

/****************************************
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
    

    

        
    
