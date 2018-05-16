#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int compare(int a, int *b)
{
    if(a > *b)
    {
        return a;
    }
    else
    {
        return *b;
    }
}

int main()
{
    int i = 3, j = 4;

    cout << compare(i, &j) << endl;

    return 0;
}