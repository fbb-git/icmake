/*
                             M A K E L I S T . C

    Possibilities:
        1- makelist(int, string)
        2- makelist(int, string, older, string)     -- younger ok too

    The parser may have inserted the int-argument as int O_FILE

*/

#include "iccomp.h"

ESTRUC_ *makelist(ESTRUC_ *args, E_TYPE_ type)
{
    if
    (                                       /* first arg not int */
        !test_type(codestruc(args, 0), e_int)
        ||                                  /* or second not string */
        !test_type(codestruc(args, 1), e_str)
        ||                                  /* or three arguments, but */
            ( 
              args->type == 3
              &&                            /* last is not string */
              !test_type(codestruc(args, 2), e_str)
            )
    )
    {
        semantic(type_conflict, funstring[f_makelist]);
        return (args);
    }

    catargs(args);                          /* catenate all arguments */

    if ((OPCODE_)type != op_hlt)            /* hidden function called */
        callhidden((OPCODE_)type == op_younger, args);
    else
        callrss(args, f_makelist);

    return (args);                          /* return called function code */
}



