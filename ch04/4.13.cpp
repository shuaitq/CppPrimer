#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int i;
    double d;

    d = i = 3.5;
    // d = (i = 3.5)
    // d = 3
    // i = 3 d = 3

    cout << i << endl;
    cout << d << endl;

    i = d = 3.5;
    // i = (d = 3.5)
    // i = 3.5
    // i = 3 d = 3.5

    cout << i << endl;
    cout << d << endl;

    return 0;
}