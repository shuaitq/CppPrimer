#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

void print_vector(vector<string> &v)
{
    for(const auto & s : v)
    {
        cout << s << ' ';
    }
    cout << endl;
}

void elimDups(vector<string> &words)
{
    std::sort(words.begin(), words.end());

    auto end_unique = std::unique(words.begin(), words.end());

    words.erase(end_unique, words.end());
}

bool isShorter(const string &a, const string &b)
{
    return a.length() < b.length();
}

int main()
{
    vector<string> words = { "apple", "pig", "dog", "bear", "apple", "dog", "red", "red" };
    
    elimDups(words);

    std::stable_sort(words.begin(), words.end(), isShorter);

    print_vector(words);

    return 0;
}