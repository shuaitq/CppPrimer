#include <iostream>

int main()
{
    const int v2 = 0; int v1 = v2;
    // v2 top-level const

    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;
    // p2 top-level const, p3 both low-level and top-level const, r2 low-level const

    r1 = v2;
    // legal

    p1 = p2;
    // illegal, because p1 is not a low-level const

    p2 = p1;
    // legal

    p1 = p3;
    // illegal, because p1 is not a low-level const

    p3 = p1;
    // legal

    return 0;
}