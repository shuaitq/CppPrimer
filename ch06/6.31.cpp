#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string &test()
{
    string str;

    // return a local variable
    return str;
}

int main(int argc, char *argv[])
{
    return 0;
}