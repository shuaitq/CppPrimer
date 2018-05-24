#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <utility>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char *argv[])
{
    map<string, string> m;
    fstream rules(argv[1]), text(argv[2]);
    string str;

    while(getline(rules, str))
    {
        istringstream iss(str);
        string first, second;
        iss >> first;
        getline(iss, second);
        m[first] = second.substr(1);
    }

    while(text >> str)
    {
        map<string, string>::iterator it;
        if((it = m.find(str)) != m.end())
        {
            cout << m[str] << ' ';
        }
        else
        {
            cout << str << ' ';
        }
    }

    return 0;
}