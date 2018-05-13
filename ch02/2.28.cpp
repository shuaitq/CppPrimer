#include <iostream>

int main()
{
    int i, *const cp;
    // illegal, cp must be initialize

    int *p1, *const p2;
    // illegal, p2 must be initialize

    const int ic, &r = ic;
    // illegal, ic must be initialize

    const int *const p3;
    // illegal, p3 must be initialize

    const int *p;
    // legal

    return 0;
}