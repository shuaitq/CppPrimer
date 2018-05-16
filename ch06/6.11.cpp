#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void reset(int &i)
{
    i = 0;
}

int main()
{
    int a = 3;

    cout << a << endl;

    reset(a);

    cout << a << endl;

    return 0;
}