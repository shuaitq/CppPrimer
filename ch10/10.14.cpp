#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    auto add = [](int a, int b) -> int { return a + b; };

    cout << add(1, 2) << endl;

    return 0;
}