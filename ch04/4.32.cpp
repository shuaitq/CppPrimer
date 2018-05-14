#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    constexpr int size = 5;
    int ia[size] = {1, 2, 3, 4, 5};
    for(int *ptr = ia, ix = 0; ix != size && ptr != ia + size; ++ ix, ++ ptr)
    {
        // do something
    }

    // this just use two different ways to loop through the array
    // ptr is use a pointer
    // ix is use the index of array

    return 0;
}