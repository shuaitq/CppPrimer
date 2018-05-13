#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    constexpr size_t array_size = 10;
    int ia[array_size];
    for(size_t ix = 1; ix <= array_size; ++ ix)
    {
        ia[ix] = ix;
    }
    // this for is from 1 to 10, but ia array only have from 0 to 9
    // it's out of range

    return 0;
}