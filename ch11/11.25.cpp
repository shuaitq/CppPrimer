#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    v[0] = 1;
    
    // illegal, because v.size() is 0 we shouldn't access 0 element

    return 0;
}