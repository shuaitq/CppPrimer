#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &str, size_t sz)
{
    return str.size() < sz;
}

int main()
{
    string str = "Hello";
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    auto result = find_if(v.begin(), v.end(), bind(check_size, str, _1));

    if(result != v.cend())
    {
        cout << *result << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    
    return 0;
}