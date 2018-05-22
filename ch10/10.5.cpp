#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char str1[] = "asdf", str2[] = "asdf", str3[] = "123";
    char *str4 = str1;

    // it will compare two char pointer like this

    if(str1 == str2)
    {
        cout << str1 << "==" << str2 << endl;
    }
    else
    {
        cout << str1 << "!=" << str2 << endl;
    }

    if(str1 == str3)
    {
        cout << str1 << "==" << str3 << endl;
    }
    else
    {
        cout << str1 << "!=" << str3 << endl;
    }
    
    if(str1 == str4)
    {
        cout << str1 << "==" << str4 << endl;
    }
    else
    {
        cout << str1 << "!=" << str4 << endl;
    }

    return 0;
}