#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = { 1, 2, 3, 4, 6, 7, 8, 9 };

    auto upper = upper_bound(v.cbegin(), v.cend(), 5);
    auto lower = lower_bound(v.cbegin(), v.cend(), 5);
    auto equal = equal_range(v.cbegin(), v.cend(), 5);
    
    cout << *upper << endl;
    cout << *lower << endl;
    cout << *(equal.first) << ' ' << *(equal.second) << endl;

    return 0;
}