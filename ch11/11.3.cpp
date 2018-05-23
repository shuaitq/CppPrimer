#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> v = { "apple", "apple", "egg", "egg", "egg", "duck" };
    map<string, int> m;

    for(const auto &s : v)
    {
        ++ m[s];
    }

    for(const auto &p : m)
    {
        cout << p.first << ' ' << p.second << " time(s)" << endl;
    }

    return 0;
}