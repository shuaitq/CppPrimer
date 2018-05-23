#include <iostream>
#include <list>
#include <map>
#include <vector>

using namespace std;

int main()
{
    map<vector<int>::iterator, int> vm;
    map<list<int>::iterator, int> lm;
    // can be declared

    vector<int> v;
    mv[v.begin()] = 1;

    list<int> l;
    lm[l.begin()] = 2;
    // no match for operator <

    return 0;
}