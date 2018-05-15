#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char c;
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0, tabCnt = 0, newlineCnt = 0;

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
        }
    }

    cout << "a: " << aCnt << endl;
    cout << "e: " << eCnt << endl;
    cout << "i: " << iCnt << endl;
    cout << "o: " << oCnt << endl;
    cout << "u: " << uCnt << endl;
    cout << "space: " << spaceCnt << endl;
    cout << "tab: " << tabCnt << endl;
    cout << "newline: " << newlineCnt << endl;

    return 0;
}