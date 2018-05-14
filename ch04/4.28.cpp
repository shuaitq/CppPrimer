#include <iostream>

using std::cin;
using std::cout;
using std::endl;

template <typename T>
void print_size()
{
    cout << sizeof(T) << endl;
}

int main()
{
    print_size<char>();
    print_size<short>();
    print_size<int>();
    print_size<long>();
    print_size<long long>();
    print_size<float>();
    print_size<double>();
    print_size<long double>();
    print_size<bool>();
    print_size<void*>();

    return 0;
}