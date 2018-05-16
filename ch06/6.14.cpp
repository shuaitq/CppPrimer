#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void print(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for(; begin != end; ++ begin)
    {
        cout << *begin << endl;
    }
}

int main()
{
    
    return 0;
}