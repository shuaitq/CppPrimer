#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
    string str;

    if(argc != 3)
    {
        cout << "Please input two string" << endl;
        return -1;
    }

    str += argv[1];
    str += " ";
    str += argv[2];

    cout << str << endl;

    return 0;
}