#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string str[10];

string (&test())[10]
{
    return str;
}

int main()
{
    string (&a)[10] = test();

    return 0;
}