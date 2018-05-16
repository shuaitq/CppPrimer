#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void count(const string &);
// we just need to read a big thing, we use const reference

void count(string &);
// if not const reference
// we can't use like count("abcd");
// and other const variable

int main()
{
    return 0;
}