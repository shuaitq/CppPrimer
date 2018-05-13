#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int a[] = {1, 2, 3}, b[] = {1, 2, 4};
    bool flag = true;

    for(int i = 0; i < 3; ++ i)
    {
        if(a[i] != b[i])
        {
            flag = false;
            break;
        }
    }

    if(flag)
    {
        cout << "same" << endl;
    }
    else
    {
        cout << "different" << endl;
    }

    vector<int> v1 = {1, 2, 3}, v2 = {1, 2, 4};
    if(v1 == v2)
    {
        cout << "same" << endl;
    }
    else
    {
        cout << "different" << endl;
    }

    return 0;
}