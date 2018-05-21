#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void replace(string &s, const string &oldVal, const string &newVal)
{
    for(size_t i = 0; i <= s.length() - oldVal.length();)
    {
        if(oldVal == s.substr(i, oldVal.size()))
        {
            s.replace(i, oldVal.size(), newVal);
            i += newVal.size();
        }
        else
        {
            ++ i;
        }
    }
}

int main()
{
    string s = "123 123 123 123 123  242 34 234 234 234 234 234 2312312 312 3213";

    replace(s, "123", "321");

    cout << s << endl;
    
    return 0;
}