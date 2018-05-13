#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    const string s = "Keep out!";

    for(auto &c : s)
    {
        // do something
    }
    // legal, the type of c is const int &

    return 0;
}