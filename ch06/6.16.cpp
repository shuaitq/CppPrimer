#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// // const string can't use this function
// bool is_empty(string &s)
// {
//     return s.empty();
// }

bool is_empty(const string &s)
{
    return s.empty();
}

int main()
{
    
    return 0;
}