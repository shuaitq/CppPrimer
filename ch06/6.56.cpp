#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    return a / b;
}

int main()
{
    vector<int (*)(int, int)> v = { add, sub, mul, division };

    cout << v.size() << endl;

    for(auto fun : v)
    {
        cout << fun(1, 2) << endl;
    }

    return 0;
}