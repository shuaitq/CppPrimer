#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void print_vector(vector<int> &vec)
{
#ifndef NDEBUG
    cout << "vector size: " << vec.size() << endl;
#endif

    if (!vec.empty())
    {
        cout << vec.back() << ' ';
        vec.pop_back();
        print_vector(vec);
    }
}

int main()
{
    vector<int> v = { 1, 2, 3, 4, 5, 6 };

    print_vector(v);
    
    return 0;
}