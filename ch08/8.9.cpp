#include <iostream>
#include <sstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::istream;
using std::istringstream;

istream &print(istream &is)
{
    string buf;

    while(is >> buf)
    {
        cout << buf << endl;
    }

    is.clear();
    return is;
}

int main()
{
    string line = "123 asdfasdf 123uasdf 12341asdf 13413sdfasdf";

    istringstream is(line);

    print(is);

    return 0;
}