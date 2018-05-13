#include <iostream>

int main()
{
    int i = 42;

    void *p = &i;
    // because every type pointer can convert to void * pointer

    long *lp = &i;
    // but int * pointer can't convert to long * pointer

    return 0;
}