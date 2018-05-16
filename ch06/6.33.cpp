#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void print_vector(vector<int>::iterator begin, vector<int>::iterator end)
{
    if(begin != end)
    {
        cout << *begin << endl;
        print_vector(begin + 1, end);
    }
}

int main()
{
    vector<int> v = { 1, 2, 3, 4, 5 };

    print_vector(v.begin(), v.end());

    return 0;
}