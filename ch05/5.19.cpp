#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str1, str2;
    do
    {
        cout << "Please input two string:";
        if(cin >> str1 >> str2)
        {
            if(str1.length() > str2.length())
            {
                cout << str2 << endl;
            }
            else
            {
                cout << str1 << endl;
            }
        }
    }
    while(cin);

    return 0;
}