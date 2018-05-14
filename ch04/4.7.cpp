#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    short s = 32767;
    ++ s;
    cout << s << endl;

    unsigned int ui = 0;
    -- ui;
    cout << ui << endl;

    int a = 0x4f4f4f4f, b = a;
    cout << a + b << endl;

    return 0;
}