#include "builtin.ih"

/*
 * strformat.c
 *
 *  Created on: 20.10.2015
 *      Author: dorwig
 *      
 * Function {\em fun\_strformat()} returns a formatted string using "%n" placeholders  found in the first arg
*/

#include "builtin.ih"


static void append(STRINGVAR_ * res,const char * s)
{
  STRINGVAR_ tmp ;
  tmp = *stringConstructor_cP(s);
	stringAdd(res,&tmp);
	stringDestructor(&tmp);
}

static void appendn(STRINGVAR_ * res,const char * s,size_t n)
{
  STRINGVAR_ tmp ;
  tmp = *stringConstructor_cPn(s,n);
	stringAdd(res,&tmp);
	stringDestructor(&tmp);
}

static void addarg(STRINGVAR_ * res,size_t i,int * newelement)
{
  char * string = getarg(i,newelement);
  append(res,string);
  if (typeValue(top() - i) & e_list && *string && *newelement == 0)
    append(res," ");
  free(string);
}


void fun_strformat(void)
{
		int newelement;

		size_t nargs = intValue(top());

		char * fmt = getarg(1,&newelement);
		char * last = fmt;
		reg = *constructor(e_str);
		while(*fmt)
		{
			if (*fmt++ == '%')
			{
				if (isdigit(*fmt))
				{
					appendn(&reg,last,fmt-1-last);
					size_t i = strtol(fmt,&last,10) ; // parameter index
					if (i >= 1 && i <= nargs)
					{
						do
						{
							addarg(&reg,i+1,&newelement);
						} while(newelement == 0);
					}
					else
					{
						append(&reg,"(null)");
					}
				}
				else if (*fmt == '%')
				{
					appendn(&reg,last,fmt-last);
					last = ++fmt;
				}
			}
		}
		if (last < fmt)
		{
			appendn(&reg,last,fmt-last);
		}
}




