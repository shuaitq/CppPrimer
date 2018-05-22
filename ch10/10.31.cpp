#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    istream_iterator<int> it(cin), end;
    ostream_iterator<int> ot(cout, " ");

    vector<int> v(it, end);

    sort(v.begin(), v.end());

    unique_copy(v.begin(), v.end(), ot);

    return 0;
}