#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str, longest;

    while(cin >> str)
    {
        if(string::npos == str.find_first_not_of("aceimnorsuvwxz"))
        {
            if(longest.length() < str.length())
            {
                longest = str;
            }
        }
    }

    cout << longest << endl;

    return 0;
}