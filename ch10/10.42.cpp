#include <iostream>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

void elimDups(list<string> &words)
{
    words.sort();

    unique(words.begin(), words.end());
}

int main(int argc, char *argv[])
{
    list<string> l = { "fox", "jumps", "over", "quick", "red", "slow", "the", "turtle" };

    elimDups(l);

    for(const auto &s : l)
    {
        cout << s << ' ';
    }
    cout << endl;

    return 0;
}