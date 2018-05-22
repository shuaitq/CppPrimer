#include <iostream>
#include <fstream>
#include <iterator>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream in(argv[1]);
    ofstream odd(argv[2]), even(argv[3]);
    
    istream_iterator<int> it(in), end;
    ostream_iterator<int> oddt(odd, " "), event(even, "\n");
    
    while(it != end)
    {
        if(*it % 2 == 0)
        {
            event = *it;
        }
        else
        {
            oddt = *it;
        }
        ++ it;
    }

    return 0;
}