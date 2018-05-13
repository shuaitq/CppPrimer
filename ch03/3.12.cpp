#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<vector<int>> ivec;
    // legal

    vector<string> svec = ivec;
    // illegal, the type of ivec and svec is different
    // and vector<int> can't covernt to string

    vector<string> svec(10, "null");
    // legal, svec will have 10 elements, each of them are "null" 

    return 0;
}