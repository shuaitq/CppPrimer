#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v = { 1, 2, 3, 4, 5 };

    vector<int>::size_type a = 1;

    cout << v[a] << endl;

    return 0;
}