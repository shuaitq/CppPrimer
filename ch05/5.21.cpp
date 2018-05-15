#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str, prestr;
    bool flag = true;

    while(cin >> str)
    {
        if(str == prestr)
        {
            if(islower(str[0]))
            {
                continue;
            }
            flag = false;
            cout << str << endl;
            break;
        }
        prestr = str;
    }

    if(flag)
    {
        cout << "no two words are same" << endl;
    }

    return 0;
}