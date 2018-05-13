#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str;

    getline(cin, str);
    cout << str << endl;

    cin >> str;
    cout << str << endl;

    // Input
    // 123 456
    // 123 456

    // Output
    // 123 456
    // 123

    // getline stop at \n
    // cin stop at space

    return 0;
}