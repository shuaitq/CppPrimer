#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a[10];

    for(auto it = a; it != a + 10; ++ it)
    {
        *it = 0;
    }

    for(int i = 0; i < 10; ++ i)
    {
        cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
}