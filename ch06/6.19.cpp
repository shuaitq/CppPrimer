#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

double calc(double);

int count(const string &, char);

int sum(vector<int>::iterator, vector<int>::iterator, int);

vector<int> vec(10);

int main()
{
    calc(23.4, 55.1);
    // illegal, because calc only have one parameter

    count("abcda", 'a');
    // legal, const char * can convert to const string &

    calc(66);
    // legal, int can convert to double

    sum(vec.begin(), vec.end(), 3.8);
    // legal, double can convert ot int

    return 0;
}