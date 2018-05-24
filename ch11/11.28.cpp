#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    map<string, vector<int>> m = { { "123", { 1, 2, 3 } }, { "321", { 3, 2, 1 } },
                                   { "456", { 4, 5, 6 } }, { "567", { 5, 6, 7 } } };

    auto it = m.find("321");
    
    for(const auto &i : it->second)
    {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}