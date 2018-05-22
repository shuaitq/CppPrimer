#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8 };

    for(const auto & i : v)
    {
        cout << i << ' ';
    }
    cout << endl;

    fill_n(v.begin(), v.size(), 0);

    for(const auto & i : v)
    {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}