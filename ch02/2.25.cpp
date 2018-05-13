#include <iostream>

int main()
{
    int* ip, i, &r = i;
    // ip pointer, i int, r reference to i

    int i, *ip = 0;
    // i int, ip pointer to nullptr

    int* ip, ip2;
    // ip pointer, ip2 int

    return 0;
}