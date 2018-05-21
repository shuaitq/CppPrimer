#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void replace(string &s, const string &oldVal, const string &newVal)
{
    for(auto it = s.begin(); it != s.end() - oldVal.size();)
    {
        if(oldVal == string(it, it + oldVal.size()))
        {
            it = s.erase(it, it + oldVal.size());
            it = s.insert(it, newVal.begin(), newVal.end());
            it += newVal.size();
        }
        else
        {
            ++ it;
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