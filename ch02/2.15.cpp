#include <iostream>

int main()
{
    int ival = 1.01;
    // legal

    int &rval1 = 1.01;
    // illegal
    // initializer must be an object

    int &rval2 = ival;
    // legal

    int &rval3;
    // illegal
    // a reference must be initialized

    return 0;
}