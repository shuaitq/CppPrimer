#include <iostream>
#include <string>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str1 = "Hello, World!", str2 = "Hello, C++!";

    if(str1 == str2)
    {
        cout << "same" << endl;
    }
    else
    {
        cout << "different" << endl;
    }

    char ch1[] = "Hello, World!", ch2[] = "Hello, C++!";

    if(strcmp(ch1, ch2) == 0)
    {
        cout << "same" << endl;
    }
    else
    {
        cout << "different" << endl;
    }

    return 0;
}