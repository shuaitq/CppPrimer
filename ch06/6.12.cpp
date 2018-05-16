#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    int a = 3, b = 4;

    cout << a << ' ' << b << endl;

    swap(a, b);

    cout << a << ' ' << b << endl;
    
    // i think reference version is better
    // because it needn't use pointer
    // more easy to understand

    return 0;
}