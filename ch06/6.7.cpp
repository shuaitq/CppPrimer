#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int increase(int x)
{
    static int num = 0;

    return num ++;
}

int main()
{
    char c;
    while(cin >> c)
    {
        cout << increase(c) << endl;
    }

    return 0;
}