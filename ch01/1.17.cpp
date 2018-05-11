#include <iostream>

int main()
{
    int currVal = 0, val = 0;

    if(std::cin >> currVal)
    {
        int cnt = 1;
        while(std::cin >> val)
        {
            if(val == currVal)
            {
                ++ cnt;
            }
            else
            {
                std::cout << currVal << " occurs "
                          << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs "
                    << cnt << " times" << std::endl;
    }
    
    // Run Program
    
    // 1 1 1 1 1 1 1 1 1 1 1 1
    // 1 occurs 12 times

    // 1 2 3 4 5 6 7 8 9 0
    // 1 occurs 1 times
    // 2 occurs 1 times
    // 3 occurs 1 times
    // 4 occurs 1 times
    // 5 occurs 1 times
    // 6 occurs 1 times
    // 7 occurs 1 times
    // 8 occurs 1 times
    // 9 occurs 1 times
    // 0 occurs 1 times

    return 0;
}