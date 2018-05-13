#include <iostream>

int main()
{
    int i = -1, &r = 0;
    // illegal, r must refer to a object

    int *const p2 = &i2;
    // legal

    const int i = -1, &r = 0;
    // legal

    const int *const p3 = &i2;
    // legal

    const int *p1 = &i2;
    // legal

    const int &const r2;
    // illegal, reference cannet be const

    const int i2 = i, &r = i;
    // legal

    return 0;
}