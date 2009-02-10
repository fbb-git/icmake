#ifndef _INCLUDED_ICM_H_
#define _INCLUDED_ICM_H_

/*
                                     I C M . H

    Generic definitions of the target operating systems.
*/

/*************************************************************************
    define MAXCMDLEN:  the max command line length
*/

#define MAXCMDLEN   500

/*************************************************************************
    P_CHECK value for implied function argument of system, chdir, etc
    P_NOCHECK when not checking
    P_CHECKMODE(int mode) is true when mode indicates checking
*/
#ifndef P_CHECK
#    define P_CHECK                 0
#endif
#ifndef P_NOCHECK
#    define P_NOCHECK               2
#endif
#ifndef P_CHECKMODE
#    define P_CHECKMODE(x)          (! ((x) & P_NOCHECK) )
#endif

/*************************************************************************
     directory objects
*/

#define O_FILE                      1
#define O_DIR                       2
#define O_SUBDIR                    4
#define O_ALL                       8

/*************************************************************************
     IS_ attributes
*/

#define IS_IFDIR                    1
#define IS_IFCHR                    2
#define IS_IFREG                    4
#define IS_IREAD                    8
#define IS_IWRITE                   16
#define IS_IEXEC                    32

/*************************************************************************
     file attributes
*/

#ifndef A_NORMAL
#    define A_NORMAL                0x00
#endif

#ifndef A_RDONLY
#    define A_RDONLY                0x01
#endif

#ifndef A_HIDDEN
#    define A_HIDDEN                0x02
#endif

#ifndef A_SYSTEM
#    define A_SYSTEM                0x04
#endif

#ifndef A_VOLID
#    define A_VOLID                 0x08
#endif

#ifndef A_SUBDIR
#    define A_SUBDIR                0x10
#endif

#ifndef A_ARCH
#    define A_ARCH                  0x20
#endif

/**************************************************************************
    UNIX specific macros
*/

#ifndef P_WAIT
#define P_WAIT                      0
#endif

#define _MAX_PATH               260
#define _MAX_DRIVE              2
#define _MAX_DIR                _MAX_PATH
#define _MAX_FNAME              _MAX_PATH
#define _MAX_EXT                _MAX_PATH
#define DIRSEP                  '/'
#define DRIVESEP                0
#define INT32                   signed int
#define UNS32                   unsigned int
#define READBINARY              "r"
#define WRITEBINARY             "w"
#define _execvp                 execvp

#define INT8  signed char
#define INT16 signed short
#define UNS16 unsigned short

#endif
