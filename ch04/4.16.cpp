#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    if(p = getPtr() != 0)
    // because != priority is higher than =
    // it is equal to p = (getPtr() != 0)
    {

    }

    // we can fix like this
    if((p = getPtr()) != 0)
    {

    }

    if(i = 1024)
    {

    }

    // we can fix like this
    if(i == 1024)
    {

    }
    
    return 0;
}