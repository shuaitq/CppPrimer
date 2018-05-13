#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int arr[10];
    for(int i = 0; i < 10; ++ i)
    {
        arr[i] = i;
    }
    int arr2[10];
    for(int i = 0; i < 10; ++ i)
    {
        arr2[i] = arr[i];
    }

    vector<int> v1;
    for(int i = 0; i < 10; ++ i)
    {
        v1.push_back(i);
    }
    vector<int> v2(v1);

    return 0;
}