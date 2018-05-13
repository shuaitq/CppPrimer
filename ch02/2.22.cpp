#include <iostream>

int main()
{
    int i = 1;
    int *p = &i;

    if(p)
    {
        // if pointer p is not null
        // do something
    }

    if(*p)
    {
        // if the object(i) that pointer point is not false
        // do something
    }

    return 0;
}