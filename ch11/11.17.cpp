#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    multiset<string> c;
    vector<string> v;

    // legal
    copy(v.begin(), v.end(), inserter(c, c.end()));

    // illegal, no push_back in multiset
    // copy(v.begin(), v.end(), back_inserter(c));

    // legal
    copy(c.begin(), c.end(), inserter(v, v.end()));

    // legal
    copy(c.begin(), c.end(), back_inserter(v));


    return 0;
}