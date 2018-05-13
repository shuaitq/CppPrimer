#include <iostream>

int main()
{
    // decltype will handle top-level const, but reference not
    // decltype will handle reference, but reference not

    int i = 1, &j = i;

    // same
    decltype(i) a;
    auto b = i;

    // different
    decltype(j) c = i;
    auto d = j;

    return 0;
}