#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<char> vc = { 'a', 'b', 'c', 'd' };
    string s(vc.begin(), vc.end());

    cout << s << endl;

    return 0;
}