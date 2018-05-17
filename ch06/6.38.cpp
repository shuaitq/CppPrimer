#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int odd[] = { 1, 3, 5, 7, 9 };
int even[] = { 0, 2, 4, 6, 8 };

auto arrPtr(int i) -> int (&)[5]
{
    return (i % 2) ? odd : even;
}

int main()
{
    int (&a)[5] = arrPtr(2);

    for(int i = 0; i < 5; ++ i)
    {
        cout << a[i] << endl;
    }

    return 0;
}