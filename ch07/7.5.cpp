#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Person
{
    string name;
    string address;

public:
    const string& get_name() const
    {
        return name;
    }
    const string& get_addr() const
    {
        return address;
    }
};

int main()
{
    return 0;
}