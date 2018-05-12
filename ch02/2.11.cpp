#include <iostream>

int main()
{
    // extern int ix = 1024;
    // Error Message
    // 2.11.cpp: In function ‘int main()’:
    // 2.11.cpp:5:16: error: ‘ix’ has both ‘extern’ and initializer
    //     extern int ix = 1024;
    //                 ^~
    // definition

    int iy;
    // definition

    extern int iz;
    // declaration

    return 0;
}