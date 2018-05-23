#include <iostream>
#include <string>
#include <list>
#include <map>

using namespace std;

int main()
{
    map<string, list<int>> m;

    m["apple"].push_back(1);
    m["apple"].push_back(3);
    m["apple"].push_back(5);
    m["apple"].push_back(7);

    m["egg"].push_back(2);
    m["egg"].push_back(4);
    m["egg"].push_back(6);
    m["egg"].push_back(8);

    for(const auto &p : m)
    {
        cout << p.first << ' ';
        for(const auto &i : p.second)
        {
            cout << i << ' ';
        }
        cout << endl;
    }

    return 0;
}