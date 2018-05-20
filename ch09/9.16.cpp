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
    list<int> l = { 1, 2, 3, 4 };
    vector<int> v2 = { 1, 2, 3, 4 };
    vector<int> v3 = { 4, 3, 2, 1 };

    cout << (vector<int>(l.begin(), l.end()) == v2) << endl;
    cout << (vector<int>(l.begin(), l.end()) == v3) << endl;

    return 0;
}