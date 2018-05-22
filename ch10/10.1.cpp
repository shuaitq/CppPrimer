#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v;
    
    for(int num; cin >> num;)
    {
        v.push_back(num);
    }

    cout << count(v.begin(), v.end(), 2) << endl;

    return 0;
}