#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::istream;
using std::ifstream;
using std::istringstream;

int main()
{
    vector<string> data;
    ifstream ifs("data.txt");
    string line;

    while(getline(ifs, line))
    {
        data.push_back(line);
    }

    for(auto &line : data)
    {
        istringstream is(line);
        string word;

        while(is >> word)
        {
            cout << word << endl;
        }
    }

    return 0;
}