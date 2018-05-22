#include <iostream>
#include <algorithm>
#include <list>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;

int main()
{
    list<string> l;
    
    for(string s; cin >> s;)
    {
        l.push_back(s);
    }

    cout << count(l.begin(), l.end(), "a") << endl;

    return 0;
}