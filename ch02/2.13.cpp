#include <iostream>

int i = 42;

int main()
{
    int i = 100;
    int j = i;

    std::cout << j << std::endl;
    // 100 because global i is hidden by the local i

    return 0;
}