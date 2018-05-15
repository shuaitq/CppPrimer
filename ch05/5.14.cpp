#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::pair;

int main()
{
    pair<string, int> max;
    int count = 0;

    for(string str, prestr; cin >> str; prestr = str)
    {
        if(str == prestr)
        {
            ++ count;
        }
        else
        {
            count = 0;
        }
        if(count > max.second)
        {
            max = {prestr, count};
        }
    }

    cout << "the word " << max.first << " occurred " << max.second + 1 << " times." << endl;
    
    return 0;
}