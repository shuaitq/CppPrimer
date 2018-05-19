#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Person
{
public:
    string name;
    string address;

    const string& get_name() const
    {
        return name;
    }
    const string& get_addr() const
    {
        return address;
    }
};

std::istream &read(std::istream &is, Person &p)
{
    is >> p.name >> p.address;
    return is;
}

std::ostream &print(std::ostream &os, const Person &p)
{
    cout << p.name << endl;
    cout << p.address << endl;
}

int main()
{
    
    return 0;
}