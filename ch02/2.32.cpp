#include <iostream>

int main()
{
    // int null = 0, *p = null;
    // Error Message
    // 2.32.cpp:5:24: error: invalid conversion from ‘int’ to ‘int*’ [-fpermissive]
    //     int null = 0, *p = null;
    //                         ^~~~
    // null is a int, but p is a int *

    int null = 0, *p = &null;
    // we must add & to get the address of null

    return 0;
}