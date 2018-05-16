#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// x is a parameter
int increase(int x)
{
    // num is a static variable
    static int num = 0;
    ++ num;
    return x + num;
}

int main()
{
    int num;
    while(cin >> num)
    {
        // num is a local variable
        cout << increase(num) << endl;
    }

    return 0;
}