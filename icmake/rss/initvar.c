/*
\funcref{initvar}{VAR\_ initvar (\params)}
    {
        {VAR\_} {v} {variable to initialize}
    }
    {initialized variable}
    {xrealloc()}
    {}
    {initvar.c}
    {
        This function initializes the variable, passed as argument, if
        necessary. Initialization may be necessary if the specified variable is
        not of type {\em e\_int}.

        The initialization of a variable includes the following actions:

        \begin{itemize}

            \item Field {\em vu.i} is set to point to allocated memory of the
            size of an {\em INTER\_} structure if this field is {\em NULL}.

            \item The {\em count} size within this structure, i.e., field {\em
            vu.i$\rightarrow$count}, is set to {\bf one} if a new variable is
            created. Note that if a variable is re-initialized, the {\em count}
            field is {\bf not} increased: this may be an action required by the
            caller. The count indicates that at least one user will use the
            memory block attached to the variable.

            \item The pointer and the counter within this field are set to zero
            by assigning the fields {\em vu.i$\rightarrow$ls.list.size} and
            {\em vu.i$\rightarrow$ls.list.element} to zero and {\em NULL}
            respectively if a new variable is created.

        \end{itemize}
    }
*/

#include "rss.ih"

void initvar (VAR_ *v)
{
    if ( (v->type & (e_str | e_list)) && ! v->vu.i )
    {
        v->vu.i = xrealloc (NULL, sizeof (INTER_));
        v->vu.i->count = 1;
        v->vu.i->ls.list.size = 0;
        v->vu.i->ls.list.element = NULL;
        v->vu.i->ls.str = NULL;
    }
}





