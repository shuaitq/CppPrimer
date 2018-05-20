#include <iostream>
#include <string>
#include <deque>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::deque;

int main()
{
    string word;
    deque<string> d;

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