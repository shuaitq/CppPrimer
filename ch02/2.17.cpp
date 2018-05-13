#include <iostream>

int main()
{
    int i, &ri = i;
    i = 5; ri = 10;

    std::cout << i << ' ' << ri << std::endl;

    // Output: 10 10
    // because i = 5; ri = 10; is equal to
    // i = 5;
    // ri = 10;
    // so ri = 10 make i and ri become 10

    return 0;
}