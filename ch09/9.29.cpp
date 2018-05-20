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
    vector<int> vec(25, 1);

    print_vector(vec);

    vec.resize(100);

    print_vector(vec);

    vec.resize(10);

    print_vector(vec);

    return 0;
}