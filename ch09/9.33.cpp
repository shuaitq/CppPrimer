#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v = { 1, 2, 3, 4, 5, 6 };
    auto begin = v.begin();

    while(begin != v.end())
    {
        ++ begin;
        v.insert(begin, 42);
        ++ begin;
    }

    for(auto i : v)
    {
        cout << i << ' ';
    }
    cout << endl;

    // crash, because the iterator is invalid

    return 0;
}