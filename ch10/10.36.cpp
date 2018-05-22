#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int main(int argc, char *argv[])
{
    list<int> l = { 1, 2, 3, 0, 4, 5, 6, 0, 7, 8 };

    auto f = find(l.crbegin(), l.crend(), 0);

    cout << distance(f, l.crend()) << endl;

    return 0;
}