#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x = 3, y = 5;

    cout << (true ? ++ x, ++ y : -- x, -- y) << endl;
    // because commma opterator have the lowest priorty
    // (true ? ++ x, ++ y : -- x), -- y
    // (++ x, ++ y), -- y
    // ++ x

    cout << x << ' ' << y << endl;

    x = 3, y = 5;

    cout << (false ? ++ x, ++ y : -- x, -- y) << endl;
    // (false ? ++ x, ++ y : -- x), -- y
    // (-- x), -- y
    // -- x, -- y    

    cout << x << ' ' << y << endl;

    return 0;
}