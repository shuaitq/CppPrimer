#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    vector<string> v = { "apple", "apple", "egg", "egg", "egg", "duck" };
    map<string, int> m;

    for(const auto &s : v)
    {
        auto ret = m.insert(make_pair(s, 1));
        if(!ret.second)
        {
            ++ret.first->second;
        }

        // this is more easy to understand
        // ++ m[s];
    }

    for(const auto &p : m)
    {
        cout << p.first << ' ' << p.second << " time(s)" << endl;
    }

    return 0;
}