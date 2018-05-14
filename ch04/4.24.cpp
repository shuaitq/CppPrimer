#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int grade;
    string finalgrade;

    cin >> grade;
    
    finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";
    // is same as
    // finalgrade = ((grade > 90) ? "high pass" : (grade < 60)) ? "fail" : "pass"
    // if grade > 90, finalgrade will always fail

    cout << finalgrade << endl;

    return 0;
}