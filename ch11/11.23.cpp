#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

void add_kid(multimap<string, string> &m, const string &first_name, const string &last_name)
{
    m.insert(make_pair(last_name, first_name));
}

int main()
{
    multimap<string, string> m;

    add_kid(m, "Tom", "Smith");
    add_kid(m, "Jim", "Smith");

    add_kid(m, "Tom", "Green");

    for(const auto &p : m)
    {
        cout << p.second << ' ' << p.first << endl;
    }

    return 0;
}