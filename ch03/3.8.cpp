#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str = "Hello, World!";

    int i = 0;
    while(i < str.length())
    {
        str[i] = 'X';
        ++ i;
    }

    cout << str << endl;

    str = "Hello, World!";

    for(int i = 0; i < str.length(); ++ i)
    {
        str[i] = 'X';
    }

    cout << str << endl;

    // for is short and better than while

    return 0;
}