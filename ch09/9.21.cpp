#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string word;
    vector<string> vec;
    auto iter = vec.begin();

    while(cin >> word)
    {
        iter = vec.insert(iter, word);
    }

    // insert before vec.begin() and return the iter of insert element
    // assign iter become the return iterator
    // continue insert until end of file

    for(auto &s : vec)
    {
        cout << s << endl;
    }

    return 0;
}