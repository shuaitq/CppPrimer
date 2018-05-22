#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> v = { "123", "1234", "12345", "123456", "1234567" };

    cout << count_if(v.begin(), v.end(), [](const string &s){ return s.size() > 6; }) << endl;

    return 0;
}