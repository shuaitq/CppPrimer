#include <iostream>

int main()
{
    // std::cin >> int input_value;
    // Error Message
    // 2.9.cpp: In function ‘int main()’:
    // 2.9.cpp:5:17: error: expected primary-expression before ‘int’
    //     std::cin >> int input_value;
    //                 ^~~

    // int i = { 3.14 };
    // c++03
    // 2.9.cpp: In function ‘int main()’:
    // 2.9.cpp:12:20: warning: narrowing conversion of ‘3.1400000000000001e+0’ from ‘double’ to ‘int’ inside { } is ill-formed in C++11 [-Wnarrowing]
    //     int i = { 3.14 };
    //                     ^
    // 2.9.cpp:12:9: warning: unused variable ‘i’ [-Wunused-variable]
    //     int i = { 3.14 };
    //         ^

    // c++11
    // 2.9.cpp: In function ‘int main()’:
    // 2.9.cpp:12:20: error: narrowing conversion of ‘3.1400000000000001e+0’from ‘double’ to ‘int’ inside { } [-Wnarrowing]
    //     int i = { 3.14 };
    //                     ^

    // double salary = wage = 9999.99;
    // wage is declared
    // can be fix like
    // double wage;
    // double salary = wage = 9999.99

    int j = 3.14;
    // ok j = 3

    return 0;
}