#include <iostream>

int main()
{
    int a = 1;

    int *p = nullptr;
    int &r = a;
    // pointer can be null but reference must init by a object

    double d = 3.14;
    p = (int *)&d;
    // pointer can point many type, but reference only can reference one type

    return 0;
}