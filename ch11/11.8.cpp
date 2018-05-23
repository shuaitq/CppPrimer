#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string>::iterator find(vector<string> &v, const string &s)
{
    auto it = v.begin();
    
    while(it != v.end())
    {
        if(s == *it)
        {
            break;
        }
        ++ it;
    }

    return it;
}

void add(vector<string> &v, const string &s)
{
    if(find(v, s) == v.end())
    {
        v.push_back(s);
    }
}

int main()
{
    vector<string> v;

    add(v, "Tom");
    add(v, "Tom");
    add(v, "Tom");
    add(v, "Tom");
    add(v, "Tom");
    add(v, "apple");
    add(v, "123");
    add(v, "321");
    add(v, "123");
    add(v, "Jim");

    for(const auto &s : v)
    {
        cout << s << endl;
    }

    // set is more esay to use
    // and more faster than vector in this case

    return 0;
}