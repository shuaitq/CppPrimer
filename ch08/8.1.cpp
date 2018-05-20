#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::istream;

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
    return 0;
}