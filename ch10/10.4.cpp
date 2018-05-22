#include <iostream>
#include <numeric>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<double> v = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.1 };

    cout << std::accumulate(v.begin(), v.end(), 0) << endl;
    // 0 is a int, result will be 36 rather than 36.1

    cout << std::accumulate(v.begin(), v.end(), 0.0) << endl;
    // 36.1

    return 0;
}