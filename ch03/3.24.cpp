#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v;
    int num;

    while(cin >> num)
    {
        v.push_back(num);
    }

    for(auto l = v.begin(), r = v.end() - 1; l <= r; ++ l, -- r)
    {
        cout << *l + *r << ' ';
    }
    cout << endl;

    return 0;
}