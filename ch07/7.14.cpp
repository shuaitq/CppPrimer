#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data;
std::istream &read(std::istream&, Sales_data&);

struct Sales_data {
    Sales_data(): bookNo(""), units_sold(0), revenue(0.0){}
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};

int main()
{
    return 0;
}