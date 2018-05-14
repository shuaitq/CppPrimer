#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int i;
    if(42 = i)
    {
        // 4.14.cpp:10:13: error: lvalue required as left operand of assignment
        //     if(42 = i)
        //             ^
    }

    if(i = 42)
    {
        // make i become 42 and look i is not zero
        // it's true
    }

    return 0;
}