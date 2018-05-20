#include <iostream>
#include <string>
#include <forward_list>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::forward_list;

void insert(forward_list<string> &lst, string a, string b)
{
    auto it = lst.begin();
    auto prev = lst.before_begin();

    while(it != lst.end())
    {
        if(*it == a)
        {
            lst.insert_after(it, b);
            return;
        }
        prev = it;
        ++ it;
    }

    lst.insert_after(prev, b);
}

int main()
{
    forward_list<string> lst = { "tom", "alis", "jim", "apple", "egg", "cake" };
    
    for(auto &i : lst)
    {
        cout << i << ' ';
    }
    cout << endl;

    insert(lst, "apple", "hot dog");

    for(auto &i : lst)
    {
        cout << i << ' ';
    }
    cout << endl;

    insert(lst, "uncle", "123");

    for(auto &i : lst)
    {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}