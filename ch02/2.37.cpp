#include <iostream>

int main()
{
    int a = 3, b = 4;
    // a int, b int
    decltype(a) c = a;
    // c int
    decltype(a = b) d = a;
    // d int &

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;

    // Result
    // a = 3, b = 4, c = 3, d = 3

    return 0;
}