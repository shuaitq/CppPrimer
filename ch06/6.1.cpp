#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// parameters: local variable in function, init by arguments provided in function call
int add(int a, int b)
{
    return a + b;
}

int main()
{
    add(3, 4);
    // arguments supply value to init the function parameters

    return 0;
}