#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec;

    cout << vec[0] << endl;
    cout << vec.front() << endl;
    cout << *vec.begin() << endl;
    cout << vec.at(0) << endl;

    return 0;
}