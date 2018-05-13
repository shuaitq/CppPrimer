#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec1(10, 42);
    vector<int> vec2 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> vec3{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

    // vec1 is better than the other two, because it's shorter and more easy to modify

    return 0;
}