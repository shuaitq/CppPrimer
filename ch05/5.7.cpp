#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // if(ival1 != ival2)
    //     ival1 = ival2
    // else ival1 = ival2 = 0;

    if(ival1 != ival2)
        ival1 = ival2; // need add semicolon
    else ival1 = ival2 = 0;

    // if(ival < minval)
    //     minval = ival;
    //     occurs = 1;

    if(ival < minval)
    {
        minval = ival;
        occurs = 1;
    }

    // if(int ival = get_value())
    //     cout << "ival = " << ival << endl;
    // if(!ival)
    //     cout << "ival = 0" << endl;
    
    if(int ival = get_value())
        cout << "ival = " << ival << endl;
    else if(!ival)
        cout << "ival = 0" << endl;

    // if(ival = 0)
    //     ival = get_value();

    if(ival == 0)
    {
        ival = get_value();
    }

    return 0;
}