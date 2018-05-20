#include <iostream>
#include <vector>
#include <list>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::string;

int main()
{
    list<const char *> l = {"Mooophy", "pezy", "Queeuqueg" };
    vector<string> v;

    v.assign(l.cbegin(), l.cend());
    
    for(auto &s : v)
    {
        cout << s << endl;
    }

    return 0;
}