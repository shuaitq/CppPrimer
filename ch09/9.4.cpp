#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

bool find(vector<int>::const_iterator begin, vector<int>::const_iterator end, int val)
{
    while(begin != end)
    {
        if(*begin == val)
        {
            return true;
        }
        ++ begin;
    }
    return false;
}

int main()
{
    vector<int> v = { 1, 2, 3, 4, 5, 6 };

    cout << find(v.cbegin(), v.cend(), 5) << endl;

    return 0;
}