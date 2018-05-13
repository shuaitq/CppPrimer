#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v;
    for(int i = 0; i < 10; ++ i)
    {
        v.push_back(i);
    }

    for(auto it = v.begin(); it != v.end(); ++ it)
    {
        *it = *it + *it;
    }

    for(auto it = v.begin(); it != v.end(); ++ it)
    {
        cout << *it << ' ';
    }
    cout << endl;

    return 0;
}