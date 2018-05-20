#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> iv;
    vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size() / 2;

    while(iter != mid)
    {
        if(*iter == some_val)
        {
            iv.insert(iter, 2 * some_val);
        }
    }

    // insert will make iterator failure

    auto mid = [&]{ return iv.begin() + iv.size() / 2; };
    for(auto it = iv.begin(); it != mid(); ++ it)
    {
        if(*it == some_val)
        {
            ++(it = v.insert(it, 2 * some_val));
        }
    }

    return 0;
}