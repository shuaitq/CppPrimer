#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void elimDups(vector<string> &words)
{
    std::sort(words.begin(), words.end());

    auto end_unique = std::unique(words.begin(), words.end());

    words.erase(end_unique, words.end());
}

string make_plural(size_t ctr, const string& word, const string& ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);

    std::stable_sort(words.begin(), words.end(),
                     [](const string &a, const string &b){ return a.size() < b.size(); });

    auto wc = find_if(words.begin(), words.end(), [sz](const string &a){ return a.size() >= sz; });

    auto count = words.end() - wc;

    cout << count << ' ' << make_plural(count, "word", "s")
         << " of length " << sz << " or longer" << endl;

    for_each(wc, words.end(), [](const string &s){ cout << s << ' '; });
    cout << endl;
}

int main()
{
    vector<string> v = { "1234","1234","1234","hi~", "alan", "alan", "cp" };
    
    biggies(v, 3);

    return 0;
}