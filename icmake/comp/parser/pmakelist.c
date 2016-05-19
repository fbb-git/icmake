/*
    Possibilities:
        1- p_makeList(int, string)
        2- p_makeList(int, string, older, string)     -- younger ok too

    The parser may insert the int-argument as int IS_FILE

*/

#include "parser.ih"

                                // op_hlt indicates not younger or older
                                // otherwise it's younger or older
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

    SemVal function;
    int nArgs = 3 + ((Opcode)type != op_hlt);

    memset(&function, 0, sizeof(SemVal));
    function.type = e_int | e_const;            // set the opcode value
    function.evalue = (Opcode)type;

    args = p_multipleArgs(args, &function);     // make room
                                                // shift upwards
    memmove(args->code + sizeof(SemVal), args->code, 
        ((int)args->type - 1) * sizeof(SemVal));

    *(SemVal *)args->code = function;            // put op_xxx first

    p_catArgs(args);                          // catenate all arguments

    p_callRss(args, f_makelist, nArgs);

    return args;                          // return called function code
}



