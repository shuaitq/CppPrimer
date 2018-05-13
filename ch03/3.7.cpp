#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str = "Hello, World!";

    for(char c : str)
    {
        c = 'X';
    }

    cout << str << endl;
    // Hello, World!

    return 0;
}