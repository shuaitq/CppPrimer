#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

bool _vectorcmp(const vector<int> &s, const vector<int> l)
{
    for(int i = 0; i < s.size(); ++ i)
    {
        if(s[i] != l[i])
        {
            return false;
        }
    }
    return true;
}

bool vectorcmp(const vector<int> &v1, const vector<int> &v2)
{
    if(v1.size() < v2.size())
    {
        return _vectorcmp(v1, v2);
    }
    else
    {
        return _vectorcmp(v2, v1);
    }
}

int main()
{
    vector<int> v1 = { 0, 1, 1, 2 };
    vector<int> v2 = { 0, 1, 1, 2, 3, 5, 8};

    if(vectorcmp(v1, v2))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}