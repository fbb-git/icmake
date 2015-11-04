#ifndef INCLUDED_SYMTAB_H_
#define INCLUDED_SYMTAB_H_

#include <stdio.h>

#include "../../rss/rss.h"

typedef struct                              /* symtab used with the compiler */
{
    VAR_ var;
    char *name;
} Symbol;


//size_t symtabNfunctions();  /* returns the # defined functions */

int symtabFunIdx();         /* g_lexstring holds the name of a function */
                            /* returns its idx or -1 if not found       */

size_t      symtabFun_nParams(size_t funIdx);
char const *symtabFunName(size_t funIdx); 
UNS16       symtabFunAddress(size_t funIdx); 
ExprType    symtabFunType(Symbol const *funInfo);

void symtabWriteFunAddress(FILE *bin, size_t funidx);



size_t symtab_nGlobals();       /* the number of global variables defined
                                     so far */
size_t symtab_nLocals();        /* the number of local variables of the 
                                    function currently being defined */

ExprType symtabLocalType(size_t idx);   /* type of local variable idx, 1st 
                                            local var has idx 0 */

void symtabWriteGlobal(FILE *bin, size_t idx);

void symtabCleanup();           /* pop all local variables */
void symtabPop();               /* remove the topmost local symtab  */


// ExprType symtabGlobalType(size_t idx);
// UNS16 *symtabGlobalValue(size_t idx);

//int symtabVarIdx();         /* g_lexstring holds the name of a variable */
//                            /* returns its idx or -1 if not found       */
//
//
//int symtabAddFunction(ExprType type); /* add new function. returns 0 if 
//                                           added,  != 0 if already def'd    */
//
//void symtabReset();          /* initialize the symtabs at function begin */
//void symtabPush();          /* initialize a new local symtab  */
//
//UNS16 const *symtabFunAddr();/* uses g_lexstring; returns address of fun    */
//Symbol const *symtabLastFunction(); /* addr. of last defined function       */
//                                    /* or NULL if none defined              */
//
//size_t symtabSetLastFunction(size_t nParams); /* initializes the fields of    */
//                                            /* the last defined function;   */
//                                            /* returns # local variables    */
//
//Symbol *symtabGlobalInfo(size_t idx);   /* info about global var 'idx' */
//
//    
//
//ExprType symtabVarType(size_t idx); /* type of variable idx */
//
//int symtabDefineVar(ExprType type); /* Define a local var. at the topmost
//                                        symbol table (-1 if already def'd) */
//
//Symbol const *symtabFunInfo(size_t idx); /* Symtab record of function idx */
//
//
//ExprType symtabFunParameterType(Symbol const *funInfo, size_t idx);

#endif

