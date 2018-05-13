#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string a, b;

    cin >> a >> b;

    if(a != b)
    {
        if(a > b)
        {
            cout << a << endl;
        }
        else
        {
            cout << b << endl;
        }
    }

    if(a.length() != b.length())
    {
        if(a.length() > b.length())
        {
            cout << a << endl;
        }
        else
        {
            cout << b << endl;
        }
    }

    return 0;
}