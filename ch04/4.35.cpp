#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char cval;
    int ival;
    unsigned int ui;
    float fval;
    double dval;

    cval = 'a' + 3;
    // 'a' convert to int, then the result of 'a' + 3 convert to char

    fval = ui - ival * 1.0;
    // ui and ival convert to double, then the result convert to float

    dval = ui * fval;
    // ui convert to float, then the result convert to double

    cval = ival + fval + dval;
    // cval = (ival + fval) + dval;
    // ival convert to float add with fval, than the result convert to double
    // add with dval, in the end, the result convert to char

    return 0;
}