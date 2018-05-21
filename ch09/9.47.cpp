#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str = "ab2c3d7R4E6";
    string numbers = "0123456789";
    string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for(int i = 0; (i = str.find_first_of(numbers, i)) != string::npos; ++ i)
    {
        cout << i << ' ';
    }
    cout << endl;

    for(int i = 0; (i = str.find_first_not_of(alphabet, i)) != string::npos; ++ i)
    {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}