#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<string> svec;
    svec.reserve(1024);
    // allocate 1024 element first for large input
    string word;

    while(cin >> word)
    // input word push_back to the end of vector
    {
        svec.push_back(word);
    }
    
    // resize the vector to the 1.5 size of the vector
    svec.resize(svec.size() + svec.size() / 2);

    return 0;
}