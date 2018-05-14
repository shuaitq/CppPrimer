#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned long ul1 = 3, ul2 = 7;
    // ul1 0000000000000000000000000000000000000000000000000000000000000010
    // ul2 0000000000000000000000000000000000000000000000000000000000000110

    cout << (ul1 & ul2) << endl;
    // 0010 & 0110 = 0010 = 3

    cout << (ul1 | ul2) << endl;
    // 0010 | 0110 = 0110 = 7

    cout << (ul1 && ul2) << endl;
    // 3 && 7 = true(1)

    cout << (ul1 || ul2) << endl;
    // 3 || 7 = true(1)

    return 0;
}