#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a[3][4] = {{1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6}};

    using int_array = int[4];

    for(int_array &i : a)
    {
        for(int &j : i)
        {
            cout << j << ' ';
        }
        cout << endl;
    }

    for(int i = 0; i < 3; ++ i)
    {
        for(int j = 0; j < 4; ++ j)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    for(int_array *i = a; i != a + 3; ++ i)
    {
        for(int *j = *i; j != *i + 4; ++ j)
        {
            cout << *j << ' ';
        }
        cout << endl;
    }

    return 0;
}