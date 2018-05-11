#include <iostream>

void print_range(int low, int high)
{
    while(low <= high)
    {
        std::cout << low << ' ';
        ++ low;
    }
    std::cout << std::endl;
}

int main()
{
    int a, b;

    std::cin >> a >> b;

    if(a > b)
    {
        print_range(b, a);
    }
    else
    {
        print_range(a, b);
    }

    return 0;
}