#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    map<string, vector<int>> m;

    auto ret = m.insert(make_pair("Tom", vector<int>(10, 1)));
    // pair<map<string, vector<int>>::iterator, bool> insert(pair<string, vector<int>>);

    return 0;
}