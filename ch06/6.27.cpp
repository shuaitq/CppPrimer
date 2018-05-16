#include <iostream>
#include <initializer_list>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;

int sum(initializer_list<int> list)
{
    int sum = 0;
    for(const auto &num : list)
    {
        sum += num;
    }
    return sum;
}

int main(int argc, char *argv[])
{
    cout << sum({1, 2, 3, 4, 5}) << endl;

    cout << sum({1, 22, 333, 4444}) << endl;

    return 0;
}