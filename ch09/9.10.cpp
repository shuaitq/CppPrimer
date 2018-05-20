#include <iostream>
#include <vector>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::vector;

int main()
{
    vector<int> v1;

    const vector<int> v2;

    auto it1 = v1.begin();
    // vector<int>::iterator
    
    auto it2 = v2.begin();
    // vector<int>::const_iterator
    
    auto it3 = v1.cbegin();
    // vector<int>::const_iterator
    
    auto it4 = v2.cbegin();
    // vector<int>::const_iterator

    return 0;
}