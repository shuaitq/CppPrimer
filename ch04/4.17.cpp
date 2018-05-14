#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a = 1, b = 0;

    b = a --;
    // assignment first, and than operator

    b = -- a;
    // oprator first, and than assignment

    return 0;
}