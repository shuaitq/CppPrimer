#include <iostream>
#include <string>

std::string global_str;
int global_int;

int main()
{
    int local_int;
    std::string local_str;

    std::cout << global_str << std::endl;
    // value is a empty string

    std::cout << global_int << std::endl;
    // global_int is global variable, so the value is zero

    std::cout << local_str << std::endl;
    // defined by class, so it is a empty string

    std::cout << local_int << std::endl;
    // local_int is a local variable which is uninitialized. so it's value is undefined.

    return 0;
}