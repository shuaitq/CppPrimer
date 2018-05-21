#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string add_pre_and_suffix(string name, const string &pre, const string &suf)
{
    name.insert(0, pre);
    name.insert(name.size(), suf);
    return name;
}

int main()
{
    string name = "Tom Smith";

    cout << add_pre_and_suffix(name, "Mr.", " Jr.") << endl;
    
    return 0;
}