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

struct PersonInfo
{
    string name;
    vector<string> phones;
};

int main()
{
    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    ifstream num("num.txt");

    while(getline(num, line))
    {
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        cout << info.name << ':';
        while(record >> word)
        {
            info.phones.push_back(word);
            cout << word << ' ';
        }
        cout << endl;
        people.push_back(info);
    }

    return 0;
}