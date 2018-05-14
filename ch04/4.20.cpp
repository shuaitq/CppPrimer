#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<string> v;

    auto iter = v.begin();

    *iter++;
    // return *iter then ++ iter

    (*iter) ++
    // illegal, *iter is a string, can't increase

    *iter.empty();
    // illegal, should use ->

    iter->empty();
    // indicate whether the element iter point to is empty

    ++ *iter;
    // illegal, string can't increase

    iter ++->empty();
    // return iter->empty(), then increase iter

    return 0;
}