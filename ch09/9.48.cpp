#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string numbers = "0123456789";
    string name = "r2d2";

    cout << numbers.find(name) << endl;
    // string::npos
    // 18446744073709551615

    return 0;
}