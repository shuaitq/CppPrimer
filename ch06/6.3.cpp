#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fact(int val)
{
    if(val == 1)
    {
        return 1;
    }
    else
    {
        return val * fact(val - 1);
    }
}

int main()
{
    int num;
    while(cin >> num)
    {
        cout << fact(num) << endl;
    }

    return 0;
}