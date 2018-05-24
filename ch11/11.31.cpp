#include <iostream>
#include <string>
#include <map>
#include <utility>

using namespace std;

int main()
{
    multimap<string, string> m;

    m.insert(make_pair("XXX", "C++ Primer"));
    m.insert(make_pair("AAA", "C++ Primer Plus"));

    multimap<string, string>::iterator it;

    if((it = m.find("AAA")) != m.end())
    {
        m.erase(it);
    }

    if((it = m.find("BBB")) != m.end())
    {
        m.erase(it);
    }

    for(const auto &p : m)
    {
        cout << p.first << ' ' << p.second << endl;
    }

    return 0;
}