#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
    // char ch = next_text();
    // switch(ch)
    // {
    // case 'a': aCnt ++;
    // case 'e': eCnt ++;
    // default: iouCnt ++;
    // }

    // need a break statement
    switch(ch)
    {
    case 'a': aCnt ++; break;
    case 'e': eCnt ++; break;
    default: iouCnt ++; break;
    }

    // unsigned index = some_value();
    // switch(index)
    // {
    // case 1:
    //     int ix = get_value();
    //     ivec[ix] = index;
    //     break;
    // default:
    //     ix = ivec.size() - 1;
    //     ivec[ix] = index;
    // }

    unsigned index = some_value();
    int ix;
    switch(index)
    {
    case 1:
        ix = get_value();
        ivec[ix] = index;
        break;
    default:
        ix = ivec.size() - 1;
        ivec[ix] = index;
    }

    // unsigned evenCnt = 0, oddCnt = 0;
    // int digit = get_num() % 10;
    // switch(digit)
    // {
    // case 1, 3, 5, 7, 9:
    //     oodCnt ++;
    //     break;
    // case 2, 4, 6, 8, 10:
    //     evenCnt ++;
    //     break;
    // }

    // case label syntax error
    unsigned evenCnt = 0, oddCnt = 0;
    int digit = get_num() % 10;
    switch(digit)
    {
    case 1: case 3: case 5: case 7: case 9:
        oodCnt ++;
        break;
    case 2: case 4: case 6: case 8: case 0:
        evenCnt ++;
        break;
    }

    // unsigned ival = 512, jval = 1024, kval = 4096;
    // unsigned bufsize;
    // unsigned swt = get_bufCnt();
    // switch(swt)
    // {
    // case ival:
    //     bufsize = ival * sizeof(int);
    //     break;
    // case jval:
    //     bufsize = jval * sizeof(int);
    //     break;
    // case kval:
    //     bufsize = kval * sizeof(int);
    //     break;
    // }

    // case label must be a const expression
    const unsigned ival = 512, jval = 1024, kval = 4096;
    unsigned bufsize;
    unsigned swt = get_bufCnt();
    switch(swt)
    {
    case ival:
        bufsize = ival * sizeof(int);
        break;
    case jval:
        bufsize = jval * sizeof(int);
        break;
    case kval:
        bufsize = kval * sizeof(int);
        break;
    }

    return 0;
}