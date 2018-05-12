#include <iostream>
#include <limits>
#include <string>

template <typename T>
void type_info(std::string name)
{
    std::cout << name;
    std::cout << " size " << sizeof(T);
    std::cout << " range [" << std::numeric_limits<T>::min();
    std::cout << ", " << std::numeric_limits<T>::max() << "]" << std::endl;
}

int main()
{
    type_info<short>("short");
    type_info<unsigned short>("unsigned short");
    type_info<int>("int");
    type_info<unsigned int>("unsigned int");
    type_info<long>("long");
    type_info<unsigned long>("unsigned long");
    type_info<long long>("long long");
    type_info<unsigned long long>("unsigned long long");

    type_info<float>("float");
    type_info<double>("double");
    type_info<long double>("long double");

    // Result
    // short size 2 range [-32768, 32767]
    // unsigned short size 2 range [0, 65535]
    // int size 4 range [-2147483648, 2147483647]
    // unsigned int size 4 range [0, 4294967295]
    // long size 8 range [-9223372036854775808, 9223372036854775807]
    // unsigned long size 8 range [0, 18446744073709551615]
    // long long size 8 range [-9223372036854775808, 9223372036854775807]
    // unsigned long long size 8 range [0, 18446744073709551615]
    // float size 4 range [1.17549e-38, 3.40282e+38]
    // double size 8 range [2.22507e-308, 1.79769e+308]
    // long double size 16 range [3.3621e-4932, 1.18973e+4932]

    return 0;
}