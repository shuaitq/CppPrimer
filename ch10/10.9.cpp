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
    print_vector(words);

    words.erase(end_unique, words.end());
    print_vector(words);
}

int main()
{
    vector<string> words = { "apple", "pig", "dog", "bear", "apple", "dog", "red", "red" };
    
    elimDups(words);

    return 0;
}