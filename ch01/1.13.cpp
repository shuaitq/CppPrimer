#include <iostream>

int main()
{
    // 1.9
    {
        int sum = 0;
        
        for(int i = 50; i <= 100; ++ i)
        {
            sum += i;
        }

        std::cout << "Sum is " << sum << std::endl;
    }

    // 1.10
    {
        for(int i = 10; i >= 0; -- i)
        {
            std::cout << i << ' ';
        }
        std::cout << std::endl;
    }

    // 1.11
    {
        int low, high;
        std::cin >> low >> high;
        for(int i = low; i <= high; ++ i)
        {
            std::cout << i << ' ';
        }
        std::cout << std::endl;
    }

    return 0;
}