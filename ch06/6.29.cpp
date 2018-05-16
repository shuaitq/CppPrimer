#include <iostream>
#include <initializer_list>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;

int sum(initializer_list<int> list)
{
    int sum = 0;
    // depend on the type of elements, it's necessary when type is very big
    for(const auto &num : list)
    {
        sum += num;
    }
    return sum;
}

int main(int argc, char *argv[])
{
    return 0;
}