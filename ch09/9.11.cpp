#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void print_vector(vector<int> &v)
{
    cout << "vector size:" << v.size() << endl;
    for(auto &i : v)
    {
        cout << i << ' ';
    }
    cout << endl;
}

int main()
{
    vector<int> v1;
    // size 0
    // no element
    vector<int> v2(10);
    // size 10
    // all elements 0
    vector<int> v3(10, 1);
    // size 10
    // all elements 1
    vector<int> v4{ 1, 2, 3, 4 };
    // size 4
    // 1 2 3 4
    vector<int> v5(v4);
    // size 4
    // 1 2 3 4
    vector<int> v6(v3.begin(), v3.end());
    // size 10
    // all elements 1

    print_vector(v1);
    print_vector(v2);
    print_vector(v3);
    print_vector(v4);
    print_vector(v5);
    print_vector(v6);

    return 0;
}