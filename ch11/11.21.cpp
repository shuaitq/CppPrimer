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
        ++m.insert(make_pair(s, 0)).first->second;

        // count word occurs time
    }

    for(const auto &p : m)
    {
        cout << p.first << ' ' << p.second << " time(s)" << endl;
    }

    return 0;
}