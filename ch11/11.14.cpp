#include <iostream>
#include <utility>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<pair<string, int>> v;
    string str;
    int i;

    // most easy way to understand
    while(cin >> str >> i)
    {
        v.push_back(make_pair(str, i));
    }

    // while(cin >> str >> i)
    // {
    //     v.push_back(pair(str, i));
    // }

    // while(cin >> str >> i)
    // {
    //     v.push_back(pair{str, i});
    // }

    for(const auto &p : v)
    {
        cout << p.first << ' ' << p.second << endl;
    }

    return 0;
}