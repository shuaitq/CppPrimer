#include "Sales_item.h"

#include <iostream>

int main()
{
    Sales_item currItem, item;

    if(std::cin >> currItem)
    {
        int cnt = 1;
        while(std::cin >> item)
        {
            if(item == currItem)
            {
                ++ cnt;
            }
            else
            {
                std::cout << currItem << " occurs "
                          << cnt << " times" << std::endl;
                currItem = item;
                cnt = 1;
            }
        }
        std::cout << currItem << " occurs "
                    << cnt << " times" << std::endl;
    }

    // Run Program
    // 0-201-78345-X 3 20.00
    // 0-201-78345-X 3 20.00
    // 0-201-78345-X 3 20.00
    // 0-201-78345-A 3 24.99
    // 0-201-78345-X 3 60 20 occurs 3 times
    // 0-201-78345-A 3 24.99
    // 0-201-78345-A 3 74.97 24.99 occurs 2 times

    return 0;
}