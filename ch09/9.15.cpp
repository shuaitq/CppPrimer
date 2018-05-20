#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v1 = { 1, 2, 3, 4 };
    vector<int> v2 = { 1, 2, 3, 4 };
    vector<int> v3 = { 4, 3, 2, 1 };

    cout << (v1 == v2) << endl;
    cout << (v1 == v3) << endl;

    return 0;
}