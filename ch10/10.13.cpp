#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

bool longer(const string &s)
{
    return s.length() > 5;
}

int main()
{
    vector<string> v = { "123", "1234", "12345", "123456", "1234567" };

    auto end = std::partition(v.begin(), v.end(), longer);

    for(auto it = v.begin(); it != end; ++ it)
    {
        cout << *it << ' ';
    }
    cout << endl;

    return 0;
}