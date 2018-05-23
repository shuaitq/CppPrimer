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

    while(cin >> str >> i)
    {
        v.push_back(make_pair(str, i));
    }

    for(const auto &p : v)
    {
        cout << p.first << ' ' << p.second << endl;
    }

    return 0;
}