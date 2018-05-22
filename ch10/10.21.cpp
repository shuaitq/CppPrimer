#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int cnt = 10;

    auto f = [&cnt]() -> bool
    {
        if(cnt)
        {
            -- cnt;
            return false;
        }
        else
        {
            return true;
        }
    };

    for(int i = 0; i < 15; ++ i)
    {
        if(f())
        {
            cout << "Zero" << endl;
        }
        else
        {
            cout << "Not Zero" << endl;
        }
    }

    return 0;
}