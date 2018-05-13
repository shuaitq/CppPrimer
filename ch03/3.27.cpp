#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int text_size()
{
    return 1024;
}

int main()
{
    unsigned buf_size = 1024;

    // int ia[buf_size];
    // illegal, buf_size is not a constexpr

    int ia[4 * 7 - 14];
    // legal

    // int ia[text_size()];
    // illegal, text_size() return is not a constexpr

    // char st[11] = "fundamental";
    // illegal "fundamental" have 11 char, so it need 12 elements to place it

    return 0;
}