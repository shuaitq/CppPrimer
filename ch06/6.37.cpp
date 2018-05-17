#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string str[10];

using str_arr = string[10];

str_arr &test1()
{
    return str;
}

auto test2() -> string (&)[10]
{
    return str;
}

decltype(str)& test3()
{
    return str;
}

int main()
{
    string (&a)[10] = test1();

    string (&b)[10] = test2();

    string (&c)[10] = test3();

    return 0;
}