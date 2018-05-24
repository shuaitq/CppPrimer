#include <iostream>
#include <string>
#include <map>
#include <utility>

using namespace std;

int main()
{
    multimap<string, string> m;

    m.insert(make_pair("XXX", "C++ Primer"));
    m.insert(make_pair("XXX", "D++ Primer"));
    m.insert(make_pair("XXX", "E++ Primer"));
    m.insert(make_pair("XXX", "F++ Primer"));
    m.insert(make_pair("AAA", "C++ Primer Plus"));
    m.insert(make_pair("AAA", "D++ Primer Plus"));
    m.insert(make_pair("AAA", "E++ Primer Plus"));
    m.insert(make_pair("AAA", "F++ Primer Plus"));
    m.insert(make_pair("AAA", "G++ Primer Plus"));
    m.insert(make_pair("AAA", "H++ Primer Plus"));

    multimap<string, string>::iterator it;

    for(const auto &p : m)
    {
        cout << p.first << ' ' << p.second << endl;
    }

    return 0;
}