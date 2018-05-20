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
    list<int> lst(5, 3);
    vector<int> vec(5, 1);

    vector<double> dvec1(lst.begin(), lst.end());
    for(auto i : lst)
    {
        cout << i << ' ';
    }
    cout << endl;
    for(auto i : dvec1)
    {
        cout << i << ' ';
    }
    cout << endl;

    vector<double> dvec2(vec.begin(), vec.end());
    for(auto i : vec)
    {
        cout << i << ' ';
    }
    cout << endl;
    for(auto i : dvec2)
    {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}