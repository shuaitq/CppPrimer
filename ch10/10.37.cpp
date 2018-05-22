#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    list<int> l(v.crbegin() + 3, v.crbegin() + 8);

    for(const auto &i : l)
    {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}