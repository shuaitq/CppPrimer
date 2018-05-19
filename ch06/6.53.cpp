#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int calc(int &, int &);
int calc(const int &, const int &);
// legal

int calc(char *, char *);
int calc(const char *, const char *);
// legal

int calc(char *, char *);
int calc(char *const, char *const);
// illegal, char *const is a top level const

int main()
{
    
    return 0;
}