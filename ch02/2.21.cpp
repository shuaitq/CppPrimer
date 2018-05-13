#include <iostream>

int main()
{
    int i = 0;

    double *dp = &i;
    // illegal
    // 2.21.cpp:7:19: error: cannot convert ‘int*’ to ‘double*’ in initialization
    //     double *dp = &i;
    //                 ^

    int *ip = i;
    // illegal
    // 2.21.cpp:9:15: error: invalid conversion from ‘int’ to ‘int*’ [-fpermissive]
    //     int *ip = i;
    //             ^

    int *p = &i;
    // legal

    return 0;
}