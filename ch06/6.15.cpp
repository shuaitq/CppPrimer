#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

// s use const to avoid modify of s, occurs need be modify so use reference
// s use reference to void copy big string, occurs use reference for modify value
// s maybe modify in function, which is not should this function do
// if occurs is a const reference, we can't to modify it and give value out
string::size_type find_char(const string &s, char c, string:size_type &occurs)
{
    auto ret = s.size();
    occurs = 0;
    for(decltype(ret) i = 0; i != s.size(); ++ i)
    {
        if(s[i] == c)
        {
            if(ret == s.size())
            {
                ret = i;
            }
            ++ occurs;
        }
    }
    return ret;
}

int main()
{
    
    return 0;
}