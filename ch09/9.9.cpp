#include <iostream>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::list;

int main()
{
    list<string> lst;
    const list<string> clst;

    lst.begin();
    // begin() return iterator if lst is not const

    clst.begin();
    // return const_iterator because clst is a const list<string>

    lst.cbegin();
    clst.cbegin();
    // cbegin() always return const_iterator

    return 0;
}