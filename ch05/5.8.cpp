#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // this is dangling else

    if(a)
        if(b)
            // do something
    else
        // do something

    // C++ will always pair the cloest if and else like follow

    if(a)
    {
        if(b)
        {
            // do something
        }
        else
        {
            // do something
        }
    }

    return 0;
}