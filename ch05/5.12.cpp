#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char c, prec = '\0';
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    int spaceCnt = 0, tabCnt = 0, newlineCnt = 0;
    int ffCnt = 0, flCnt = 0, fiCnt = 0;

    while(cin >> std::noskipws >> c)
    {
        switch(c)
        {
        case 'a':
        case 'A':
            ++ aCnt;
            break;
        case 'e':
        case 'E':
            ++ eCnt;
            break;
        case 'i':
            if(prec == 'f')
            {
                ++ fiCnt;
            }
        case 'I':
            ++ iCnt;
            break;
        case 'o':
        case 'O':
            ++ oCnt;
            break;
        case 'u':
        case 'U':
            ++ uCnt;
            break;
        case ' ':
            ++ spaceCnt;
            break;
        case '\t':
            ++ tabCnt;
            break;
        case '\n':
            ++ newlineCnt;
            break;
        case 'l':
            if(prec == 'f')
            {
                ++ flCnt;
            }
            break;
        case 'f':
            if(prec == 'f')
            {
                ++ ffCnt;
            }
        }
        prec = c;
    }

    cout << "a: " << aCnt << endl;
    cout << "e: " << eCnt << endl;
    cout << "i: " << iCnt << endl;
    cout << "o: " << oCnt << endl;
    cout << "u: " << uCnt << endl;
    cout << "space: " << spaceCnt << endl;
    cout << "tab: " << tabCnt << endl;
    cout << "newline: " << newlineCnt << endl;
    cout << "ff: " << ffCnt << endl;
    cout << "fl: " << flCnt << endl;
    cout << "fi: " << fiCnt << endl;

    return 0;
}