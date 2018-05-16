#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int abs(int a)
{
    if(a < 0)
    {
        return -a;
    }
    else
    {
        return a;
    }
}

int main()
{
    int num;
    while(cin >> num)
    {
        cout << abs(num) << endl;
    }

    return 0;
}