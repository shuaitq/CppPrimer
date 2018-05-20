#include <iostream>
#include <forward_list>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::forward_list;

auto remove_evens_and_double_odds(list<int> &data)
{
    for(auto cur = data.begin(); cur != data.end();)
    {
        if(*cur % 2 == 1)
        {
            cur = data.insert(cur, *cur);
            ++ cur;
            ++ cur;
        }
        else
        {
            cur = data.erase(cur);
        }
    }
}

auto remove_evens_and_double_odds(forward_list<int> &data)
{
    for(auto cur = data.begin(), prev = data.before_begin(); cur != data.end();)
    {
        if(*cur % 2 == 1)
        {
            cur = data.insert_after(prev, *cur);
            ++ cur;
            ++ cur;
            ++ prev;
            ++ prev;
        }
        else
        {
            cur = data.erase_after(prev);
        }
    }
}

template <typename T>
void print(T &t)
{
    for(auto it = t.begin(); it != t.end(); ++ it)
    {
        cout << *it << ' ';
    }
    cout << endl;
}

int main()
{
    forward_list<int> flst = { 1, 2, 3, 4, 5, 6 };
    list<int> lst = { 1, 2, 3, 4, 5, 6 };

    remove_evens_and_double_odds(flst);
    remove_evens_and_double_odds(lst);

    print<decltype(flst)>(flst);
    print<decltype(lst)>(lst);

    return 0;
}