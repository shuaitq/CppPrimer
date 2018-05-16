#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int *const a, int *const b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int a = 3, b = 4;

    cout << a << ' ' << b << endl;

    swap(&a, &b);

    cout << a << ' ' << b << endl;

    return 0;
}