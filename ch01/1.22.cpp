#include "Sales_item.h"

#include <iostream>

int main()
{
    Sales_item sum, value;

    if(std::cin >> sum)
    {
        while(std::cin >> value)
        {
            if(sum.isbn() == value.isbn())
            {
                sum += value;
            }
            else
            {
                std::cout << "Different ISBN" << std::endl;
                break;
            }
        }
        std::cout << sum << std::endl;
    }
}