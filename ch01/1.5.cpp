#include <iostream>

int main()
{
    int a, b;

    std::cin >> a >> b;
    std::cout << a;
    std::cout << " * ";
    std::cout << b;
    std::cout << " = ";
    std::cout << a * b << std::endl;

    return 0;
}