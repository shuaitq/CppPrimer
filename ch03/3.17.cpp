#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string str;
    vector<string> v;

    while(cin >> str)
    {
        v.push_back(str);
    }

    for(auto &s : v)
    {
        for(auto &c : s)
        {
            c = toupper(c);
        }
    }

    for(auto &s : v)
    {
        cout << s << endl;
    }
    
    return 0;
}