#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v = { 1, 2, 3, 4, 5, 6 };
    auto begin = v.begin();

    // while(begin != v.end())
    //     if(*begin % 2)
    //         begin = vi.insert(begin, *begin);
    //     ++ begin;
    // illegal, because ++ begin is out of while

    while(begin != v.end())
    {
        if(*begin % 2)
        {
            begin = v.insert(begin, *begin);
            ++ begin;
        }
        ++ begin;
    }

    for(auto &i : v)
    {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}