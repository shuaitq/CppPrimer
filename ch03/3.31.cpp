#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::endl;
using std::array;

int main()
{
    int ni[10];

    for(int i = 0; i < 10; ++ i)
    {
        ni[i] = i;
    }

    for(int i = 0; i < 10; ++ i)
    {
        cout << ni[i] << ' ';
    }
    cout << endl;

    return 0;
}