#include <iostream>
#include <vector>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
    int num[] = {1, 2, 3, 4};

    vector<int> v(begin(num), end(num));

    for(auto i : v)
    {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}