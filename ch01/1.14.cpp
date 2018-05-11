#include <iostream>

int main()
{
    const int start = 0, end = 10;

    for(int i = start; i < end; ++ i)
    {
        // do something
    }

    int i = start;
    while(i < end)
    {
        // do something
        ++ i;
    }

    for(;/* some rules */;)
    {
        // do something
    }

    while(/* some rules */)
    {
        // do something
    }

    return 0;
}