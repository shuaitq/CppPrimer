#include <iostream>
#include <vector>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::list;

int main()
{
    vector<int> v = { 1, 2, 3, 4, 5 };

    vector<int> v1(v);
    // legal, the type is the same

    vector<int> v2(v.begin(), v.end());
    // legal

    list<int> l1(v);
    // illegal, the typee is not the same

    list<int> l2(v.begin(), v.end());
    // legal, l2 can use two vector<int>::iterator init

    return 0;
}