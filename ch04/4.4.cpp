#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2
    // ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2)
    // (4 * 4) + 75 + (0 / 2)
    // 16 + 75 + 0
    // 91

    cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << endl;

    return 0;
}