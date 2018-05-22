#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8 };

    for(auto it = v.cend() - 1; ; -- it)
    {
        cout << *it << ' ';
        if(it == v.cbegin())
        {
            break;
        }
    }
    cout << endl;

    return 0;
}