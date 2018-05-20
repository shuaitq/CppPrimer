#include <iostream>
#include <vector>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::end;
using std::begin;
using std::list;
using std::vector;

int main()
{
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };

    vector<int> vec(begin(ia), end(ia));
    list<int> lst(begin(ia), end(ia));

    for(auto it = lst.begin(); it != lst.end();)
    {
        if(*it % 2 == 0)
        {
            ++ it;
        }
        else
        {
            it = lst.erase(it);
        }
    }

    for(auto it = vec.begin(); it != vec.end();)
    {
        if(*it % 2 == 0)
        {
            it = vec.erase(it);
        }
        else
        {
            ++ it;
        }
    }

    for(auto &i : vec)
    {
        cout << i << ' ';
    }
    cout << endl;
    for(auto &i : lst)
    {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}