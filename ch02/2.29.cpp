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

    i = ic;
    // legal

    p1 = p3;
    // illegal p3 is const int *const, but p1 is int *

    p1 = &ic;
    // illegal ic is const int, but p1 is int *

    p3 = &ic;
    // illegal p3 is a const pointer

    p2 = p1;
    // illegal p2 is a const pointer

    ic = *p3;
    // illegal ic is a const int

    return 0;
}