#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

void add_family(map<string, vector<string>> &m, const string &last_name)
{
    m[last_name];
}

void add_kid(map<string, vector<string>> &m, const string &first_name, const string &last_name)
{
    m[last_name].push_back(first_name);
}

int main()
{
    map<string, vector<string>> m;

    add_family(m, "Smith");
    add_kid(m, "Tom", "Smith");

    add_family(m, "Green");

    for(const auto &p : m)
    {
        cout << "Family:" << p.first << endl;
        cout << "Kids:";
        for(const auto &s : p.second)
        {
            cout << s << ' ' << p.first << ' ';
        }
        cout << endl;
    }

    return 0;
}