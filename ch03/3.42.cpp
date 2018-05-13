#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v = {1, 2, 3};
    int num[3];

    for(int i = 0; i < 3; ++ i)
    {
        num[i] = v[i];
    }

    for(int i = 0; i < 3; ++ i)
    {
        cout << num[i] << ' ';
    }
    cout << endl;

    return 0;
}