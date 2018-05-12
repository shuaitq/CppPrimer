#include <iostream>

int main()
{
    {
        // decimal
        int month = 9, day = 7;

        std::cout << month << ' ' << day << std::endl;
    }

    {
        // month is invalid, cause octal don't have digit 9
        // day is octal
        // int month = 09, day = 07;
        
        // std::cout << month << ' ' << day << std::endl;
    }

    return 0;
}