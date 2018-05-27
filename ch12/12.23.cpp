#include <iostream>
#include <string>
#include <cstring>

int main()
{
    char *str = new char[32];

    strcat(str, "hello ");
    strcat(str, "world");
    std::cout << str << std::endl;
    delete [] str;

    std::string str1;

    str1 += "hello ";
    str1 += "world";

    std::cout << str1 << std::endl;

    return 0;
}