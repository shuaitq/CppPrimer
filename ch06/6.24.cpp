#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void print(const int ia[10])
// const int ia[10] is equal to const int *ia
{
    // so we should not use the size 10
    for(size_t i = 0; i != 10; ++ i)
    {
        cout << ia[i] << endl;
    }
}

// we can fix like this
void print(const int (&ia)[10])
{
    for(size_t i = 0; i != 10; ++ i)
    {
        cout << ia[i] << endl;
    }
}

int main()
{
    return 0;
}