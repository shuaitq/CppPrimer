#include <iostream>
#include <numeric>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8 };

    cout << std::accumulate(v.begin(), v.end(), 0) << endl;

    return 0;
}