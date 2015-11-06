/*
    Possibilities:
        1- makelist(int, string)
        2- makelist(int, string, older, string)     -- younger ok too

    The parser may have inserted the int-argument as int O_FILE

*/

#include "parser.ih"

SemVal *makelist(SemVal *args, ExprType type)
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
        util_semantic(gp_typeConflict, gp_funstring[f_makelist]);
        return (args);
    }

    catargs(args);                          /* catenate all arguments */

    if ((OPCODE_)type != op_hlt)            /* hidden function called */
        callhidden((OPCODE_)type == op_younger, args);
    else
        callrss(args, f_makelist);

    return (args);                          /* return called function code */
}



