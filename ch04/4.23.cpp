#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s = "word";

    // string pl = s + s[s.size() - 1] == 's' ? "" : "s";
    // + operator have higher priority than ?:

    string pl = s + (s[s.size() - 1] == 's' ? "" : "s");

    return 0;
}