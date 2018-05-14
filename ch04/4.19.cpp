#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int *ptr;
    vector<int> vec;
    int ival;

    ptr != 0 && *ptr ++
    // ptr is not a nullptr and the element ptr point to is not \0
    // than increase ptr

    ival++ && ival
    // ival is not zero or ival

    vec[ival ++] <= vec[ival];
    // illegal
    // we can fix like this
    vec[ival] <= vec[ival];

    return 0;
}