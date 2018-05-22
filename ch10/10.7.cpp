#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::list;

int main()
{
    {
        vector<int> vec;
        list<int> lst;
        int i;
        while(cin >> i)
        {
            lst.push_back(i);
        }
        // copy(lst.cbegin(), lst.cend(), vec.begin());
        // vec is an empty vector<int> this will crash

        // fix
        copy(lst.cbegin(), lst.cend(), back_inserter(vec));

        for(const auto & i : vec)
        {
            cout << i << ' ';
        }
        cout << endl;
    }

    {
        vector<int> vec;
        // vec.reserve(10);
        
        // fix
        vec.resize(10);

        cout << vec.size() << endl;

        fill_n(vec.begin(), 10, 0);
        // vec have 10 elements space for more elements
        // but it still is an empty vector


    }
    
    return 0;
}