/*
    Possibilities:
        1- p_makeList(int, string)
        2- p_makeList(int, string, older, string)     -- younger ok too

    The parser may have inserted the int-argument as int IS_FILE

*/

#include "parser.ih"

SemVal *p_makeList(SemVal *args, ExprType type)
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
        return p_stackFrame(e_list);
    }

    p_catArgs(args);                          /* catenate all arguments */

    if ((Opcode)type != op_hlt)            /* hidden function called */
        p_callHidden((Opcode)type == op_younger, args);
    else
        p_callRss(args, f_makelist);

    return args;                          /* return called function code */
}



