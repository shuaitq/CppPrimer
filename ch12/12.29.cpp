#include "12.27.h"
#include <iostream>

using namespace std;

void runQueries(std::ifstream &infile)
{
    TextQuery tq(infile);

    do {
        std::cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(std::cin >> s) || s == "q") break;
        print(std::cout, tq.query(s)) << std::endl;
    } while ( true );

    // do while is better
}

int main()
{
    std::ifstream file("data.txt");
    runQueries(file);
}