#include "builtin.ih"

void b_trim()
{
    String str;
    stringcons(&str);
    
    string_trimRight(&str, stack_top());
    string_trimLeft(eb_releaseReg(), &str);

    stringDestructor(&str);
}
