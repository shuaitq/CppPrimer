#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>

using namespace std;

void add_family(map<string, vector<pair<string, string>>> &m, const string &last_name)
{
    m[last_name];
}

void add_kid(map<string, vector<pair<string, string>>> &m, const string &first_name, const string &last_name,
             const string& bri)
{
    m[last_name].push_back(make_pair(first_name, bri));
}

int main()
{
    map<string, vector<pair<string, string>>> m;

    add_family(m, "Smith");
    add_kid(m, "Tom", "Smith", "1234-8-2");
    add_kid(m, "Jim", "Smith", "1234-8-3");

    add_family(m, "Green");
    add_kid(m, "Tom", "Green", "4321-8-2");

    for(const auto &p : m)
    {
        cout << "Family:" << p.first << endl;
        cout << "Kids:" << endl;
        for(const auto &pp : p.second)
        {
            cout << pp.first << ' ' << pp.second << endl;
        }
    }

    return 0;
}