#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void print(int *array, int n)
{
    for(int i = 0; i < n; ++ i)
    {
        cout << array[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int i = 2, j[2] = { 0, 1 };

    print(&i, 1);

    print(j, 2);

    return 0;
}