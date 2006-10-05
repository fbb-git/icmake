#include <iostream>
#include <sstream>

using namespace std;


int main(size_t argc, char **argv)
{
    istringstream in(argv[1]);
    size_t idx;
    size_t toRemove = 0;
    while (in >> idx)
    {
        ++toRemove;
        argv[idx] = 0;
        in.seekg(1, ios::cur);
    }

    for 
    (
        char **empty = argv, **end = empty + argc;
            empty != end;               /* walk along all elements  */
                ++empty
    )   
    {
        if (*empty)                     /* next element if non-empty    */
        {
            cout << "In use: " << *empty << endl;
            continue;
        }

        char **used = empty + 1;        /* beyond the empty one: find used */

        for (; used != end && *used == 0; ++used)
            ;                           /* find the next one in use */
            
        if (used == end)                /* at the end */
            break;

        *empty = *used;                 /* swap `used' and `empty' */
        *used = 0;                  
    }

    argc -= toRemove;
    for (size_t idx = 0; idx < argc; ++idx)
        cout << idx << ": " << *argv++ << endl;

    return 0;
        
}















