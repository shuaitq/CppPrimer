#include <iostream>
#include <typeinfo>

int main()
{
    int a = 3, b = 4;
    // a int, b int
    decltype(a) c = a;
    // c int
    decltype((b)) d = a;
    // d int &

    ++ c;
    ++ d;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;

    // Result
    // a = 4, b = 4, c = 4, d = 4

    return 0;
}