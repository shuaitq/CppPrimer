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
    int low, high;

    std::cin >> low >> high;
    print_range(low, high);

    return 0;
}