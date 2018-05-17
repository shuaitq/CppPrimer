#include <iostream>

using std::cin;
using std::cout;
using std::endl;

char *init(int ht, int wd = 80, char gckbrnd = ' ');

int main()
{
    init();
    // illegal, missing ht value

    init(24, 10);
    // legal

    init(14, '*');
    // legal, but wd will be '*' rather than gckbrnd = '*'

    return 0;
}