#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

template <typename T>
void print_vector(T v)
{
    cout << "size " << v.size() << endl;

    for(auto e : v)
    {
        cout << e << ' ';
    }
    cout << endl;
}

int main()
{
    vector<int> v1;
    // 0 element

    vector<int> v2(10);
    // 10 elements, each of them are 0

    vector<int> v3(10, 42);
    // 10 elements, each of them are 42

    vector<int> v4{10};
    // 1 element, the element is 10

    vector<int> v5{10, 42};
    // 2 elements, 10 and 42

    vector<string> v6{10};
    // 10 element, each of them are ""

    vector<string> v7{10, "hi"};
    // 10 elements, each of them are "hi"

    print_vector<decltype(v1)>(v1);
    print_vector<decltype(v2)>(v2);
    print_vector<decltype(v3)>(v3);
    print_vector<decltype(v4)>(v4);
    print_vector<decltype(v5)>(v5);
    print_vector<decltype(v6)>(v6);
    print_vector<decltype(v7)>(v7);

    return 0;
}