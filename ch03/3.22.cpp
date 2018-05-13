#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> v;
    string word;

    while(cin >> word)
    {
        v.push_back(word);
    }

    for(auto it = v.begin(); it != v.end(); ++ it)
    {
        for(auto jt = it->begin(); jt != it->end(); ++ jt)
        {
            *jt = toupper(*jt);
        }
    }

    for(auto it = v.begin(); it != v.end(); ++ it)
    {
        cout << *it << ' ';
    }
    cout << endl;

    return 0;
}