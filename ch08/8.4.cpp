#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::vector;

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
        cout << line << endl;
    }

    return 0;
}