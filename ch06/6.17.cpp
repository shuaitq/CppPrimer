#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool have_upper_char(const string &s)
{
    for(const auto &c : s)
    {
        if(isupper(c))
        {
            return true;
        }
    }
    return false;
}

void lower_string(string &s)
{
    for(auto &c : s)
    {
        c = tolower(c);
    }
}

int main()
{
    string str;

    while(cin >> str)
    {
        if(have_upper_char(str))
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
        
        lower_string(str);
        cout << str << endl;
    }

    // no, because in function lower_string we must modify it
    // and in have_upper_char we only need read it

    return 0;
}