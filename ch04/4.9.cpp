#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    const char *cp = "Hello World!";
    if(cp && *cp)
    {
        // do something
    }

    // upper is equal to
    if(cp)
    // the pointer cp is not a nullptr
    {
        if(*cp)
        // the char cp pointed is not a \0
        {
            // do something
        }
    }

    return 0;
}