#include <iostream>

int main()
{
    std::cout << "Who goes with F\145rgus?\012";
    // Who goes with Fergus?
    // type char[]

    std::cout << 3.14e1L << std::endl;
    // 31.4
    // type long double

    // std::cout << 1024f << std::endl;
    // Error Message
    // 2.7.cpp: In function ‘int main()’:
    // 2.7.cpp:13:18: error: unable to find numeric literal operator ‘operator""f’
    //     std::cout << 1024f << std::endl;
    //                 ^~~~~

    std::cout << 3.14L << std::endl;
    // 3.14
    // type long double

    return 0;
}