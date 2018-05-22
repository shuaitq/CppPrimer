#include <iostream>
#include <algorithm>
#include <functional>
#include <string>
#include <vector>

using namespace std;
using namespace std::placeholders;

bool cmp(const string &s, int sz)
{
    return s.size() > sz;
}

int main()
{
    vector<string> v = { "123", "1234", "12345", "123456", "1234567" };

    cout << count_if(v.begin(), v.end(), bind(cmp, _1, 6)) << endl;

    return 0;
}