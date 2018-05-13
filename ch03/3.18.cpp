#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    // vector<int> ivec;
    // ivec[0] = 42;
    // illegal, because ivec is a empty vector, can't acess 0 element

    vector<int> ivec(10);
    ivec[0] = 42;

    return 0;
}