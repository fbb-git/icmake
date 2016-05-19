#include "../string.h"

int main()
{
    String arr[10];

    for (int idx = 0; idx != 10; ++idx)     // simple construction and 
        stringcons(arr + idx);              // destruction

    for (int idx = 0; idx != 10; ++idx)
        stringDestructor(&arr[idx]);

                                            // initializing with static text
    stringcons_charPtr(&arr[0], "hello world");
                                            
    for (int idx = 1; idx != 10; ++idx)     // initializing with copycons
        stringcopycons(&arr[idx], &arr[idx - 1]);

    for (int idx = 0; idx != 10; ++idx)     // destruction of CC'd strings
        stringDestructor(&arr[idx]);

                                            // initializing with static text
    stringcons_charPtr(arr, "hello world");
                                            
    for (int idx = 1; idx != 10; ++idx)     // initializing with copycons
        stringcopycons(&arr[idx], &arr[idx - 1]);


    for (int idx = 1; idx != 10; ++idx)     // assigning
        string_assign(arr + idx - 1, arr + idx);
    
    for (int idx = 0; idx != 10; ++idx)     // destruction
        stringDestructor(&arr[idx]);

                                            // initializing with static text
    stringcons_charPtr(&arr[0], "hello world");
                                            
    for (int idx = 1; idx != 10; ++idx)     // initializing with copycons
        stringcopycons(&arr[idx], &arr[idx - 1]);


    for (int idx = 0; idx != 9; ++idx)     // adding
        string_add(arr + idx + 1, arr + idx);
    
    for (int idx = 0; idx != 10; ++idx)     // destruction
        stringDestructor(&arr[idx]);

                                            // initializing with static text
    stringcons_charPtr(&arr[0], "hello world");

    for (int idx = 1; idx != 10; ++idx)     // initializing with copycons
        stringcopycons(&arr[idx], &arr[idx - 1]);
                                            
    for (int idx = 1; idx != 10; ++idx)     // trimming
        string_trimRight(&arr[idx - 1], arr + idx);
    

    for (int idx = 0; idx != 10; ++idx)     // destruction
        stringDestructor(&arr[idx]);
}




