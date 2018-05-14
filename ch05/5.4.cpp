#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // while(string::iterator iter != s.end())
    // {
    //     // do something
    // }
    // illegal, we can fix it like this

    string::iterator iter = s.begin()
    while(iter != s.end())
    {
        // do something
    }

    // while(bool status = find(word))
    // {
    // }
    // if(!status)
    // {
    //     // do something
    // }
    // status only declared inside the while

    bool status;
    while(status = find(word))
    {
    }
    if(!status)
    {
        // do something
    }

    return 0;
}