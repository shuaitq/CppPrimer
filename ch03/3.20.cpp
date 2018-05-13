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

    for(int i = 0; i < (v.size() + 1) / 2; ++ i)
    {
        cout << v[i] + v[v.size() - 1 - i] << ' ';
    }
    cout << endl;
    
    return 0;
}