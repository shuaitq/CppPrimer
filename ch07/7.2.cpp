#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data {
    std::string isbn() const
    {
        return bookNo;
    };
    Sales_data& combine(const Sales_data &rhs)
    {
        units_sold += rhs.units_sold;
        revenue += rhs.revenue;
        return *this;
    }
    
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{

    return 0;
}