#include <iostream>
#include <string>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::list;

int main()
{
    string word;
    list<string> d;

    while(cin >> word)
    {
        d.push_back(word);
    }

    for(auto it = d.cbegin(); it != d.cend(); ++ it)
    {
        cout << *it << endl;
    }

    return 0;
}