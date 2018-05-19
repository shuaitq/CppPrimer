#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    vector<int (*)(int, int)> v = { sum };

    cout << v.size() << endl;

    cout << v[0](1, 2) << endl;

    return 0;
}