#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v;
    int element;

    while(cin >> element)
    {
        v.push_back(element);
    }

    for(auto e : v)
    {
        cout << e << ' ';
    }
    cout << endl;

    return 0;
}