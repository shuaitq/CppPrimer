#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str, all;

    // while(cin >> str)
    // {
    //     all += str;
    // }

    // cout << all << endl;

    while(cin >> str)
    {
        all += str;
        all += " ";
    }

    cout << all << endl;

    return 0;
}