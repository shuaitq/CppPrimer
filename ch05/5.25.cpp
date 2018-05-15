#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    for(int i, j; cout << "Please input two numbers:\n", cin >> i >> j;)
    {
        try
        {
            if(j == 0)
            {
                throw std::runtime_error("divisor is 0");
            }
            cout << i / j << endl;
        }
        catch(std::runtime_error err)
        {
            cout << err.what() << endl;
            cout << "Try again? y / n" << endl;
            char c;
            cin >> c;
            if(!cin || c == 'n')
            {
                break;
            }
        }
    }

    return 0;
}