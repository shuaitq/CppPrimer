#include <iostream>

int main()
{
    const int buf;
    // illegal const must be init

    int cnt = 0;
    // legal

    const int sz = cnt;
    // legal

    ++cnt;
    // legal
    ++sz;
    // illegal, can't change const object

    return 0;
}