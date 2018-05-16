#include "Chapter6.h"

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num;

    while(cin >> num)
    {
        cout << fact(num) << endl;
    }

    return 0;
}