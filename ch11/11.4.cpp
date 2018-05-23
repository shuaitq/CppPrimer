#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using std::string;
using std::vector;
using std::map;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<string> v = { "Apple.", "apple,", "Egg,", "egg.", "egg,", "Duck," };
    map<string, int> m;

    for(const auto &s : v)
    {
        string str;
        for(const auto &c : s)
        {
            str += tolower(c);
        }
        str.erase(remove_if(str.begin(), str.end(), ispunct), str.end());
        ++ m[str];
    }

    for(const auto &p : m)
    {
        cout << p.first << ' ' << p.second << " time(s)" << endl;
    }

    return 0;
}