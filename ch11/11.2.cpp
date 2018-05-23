#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <iterator>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    ostream_iterator<int> osit(cout, " ");

    {
        list<int> l = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        
        copy(l.begin(), l.end(), osit);
        cout << endl;

        auto it = l.begin();
        ++ it;
        ++ it;
        ++ it;

        l.insert(it, 11);

        copy(l.begin(), l.end(), osit);
        cout << endl;
    }
    
    {
        vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8 };

        copy(v.begin(), v.end(), osit);
        cout << endl;

        v.push_back(9);
        v.push_back(10);

        copy(v.begin(), v.end(), osit);
        cout << endl;
    }

    {
        deque<int> d = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

        copy(d.begin(), d.end(), osit);
        cout << endl;

        d.push_front(0);
        d.push_back(10);

        copy(d.begin(), d.end(), osit);
        cout << endl;
    }

    {
        vector<string> v = { "apple", "apple", "egg", "egg", "egg", "duck" };
        map<string, int> m;

        for(const auto &s : v)
        {
            ++ m[s];
        }

        for(const auto &p : m)
        {
            cout << p.first << ' ' << p.second << " time(s)" << endl;
        }
    }

    {
        set<string> s = { "Tom", "Jim", "alice", "john" };

        if(s.find("123") == s.end())
        {
            cout << "Not Found" << endl;
        }
        else
        {
            cout << "Found" << endl;
        }

        if(s.find("Tom") == s.end())
        {
            cout << "Not Found" << endl;
        }
        else
        {
            cout << "Found" << endl;
        }
    }

    return 0;
}