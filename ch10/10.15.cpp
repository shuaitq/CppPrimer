#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int size = 2;
    auto add = [size](int a) -> int { return size + a; };

    cout << add(1) << endl;

    return 0;
}