#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    vector<int> v = { 1, 2, 2, 3, 4, 5, 6, 6, 7, 7, 10 };
    list<int> l;

    unique_copy(v.begin(), v.end(), back_inserter(l));

    for(const auto &i : l)
    {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}