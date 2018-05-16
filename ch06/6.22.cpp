#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int *&a, int *&b)
{
    int *t = a;
    a = b;
    b = t;
}

int main()
{
    int c[10];

    int *a = c + 1, *b = c + 3;

    cout << a << ' ' << b << endl;

    swap(a, b);

    cout << a << ' ' << b << endl;

    return 0;
}