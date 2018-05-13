#include <iostream>

int main()
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    r2 = 3.14159;
    // legal
    // let d become 3.14159

    r2 = r1;
    // legal
    // let i become 0
    
    i = r2;
    // legal
    // but value will be truncated

    r1 = d;
    // legal
    // but value will be truncated

    return 0;
}