#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x[10];
    int *p = x;

    cout << sizeof(x) / sizeof(*x) << endl;
    // 10

    cout << sizeof(p) / sizeof(*p) << endl;
    // 2

    // because sizeof a array is the size of the array
    // sizeof(x) / sizeof(*x) = 40 / 4 = 10

    // but sizeof a pointer is the size of the pointer
    // sizeof(p) / sizeof(*p) = 8 / 4 = 2

    return 0;
}