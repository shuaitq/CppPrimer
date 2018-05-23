#include <iostream>
#include <map>
#include <string>
#include <utility>

using namespace std;

int main()
{
    map<int, string> m;

    m[25] = "Tom";

    auto it = m.begin();

    it->second = "Jim";

    for(const auto &p : m)
    {
        cout << p.first << ' ' << p.second << endl;
    }

    return 0;
}