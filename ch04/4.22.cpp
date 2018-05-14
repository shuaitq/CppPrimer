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
    
    finalgrade = grade > 90 ? "high pass" : grade > 75 ? "pass" : grade < 60 ? "fail" : "low pass";

    cout << finalgrade << endl;

    if(grade > 90)
    {
        finalgrade = "high pass";
    }
    else
    {
        if(grade > 75)
        {
            finalgrade = "pass";
        }
        else
        {
            if(grade < 60)
            {
                finalgrade = "fail";
            }
            else
            {
                finalgrade = "low pass";
            }
        }
    }

    cout << finalgrade << endl;

    // if version is more better, because it's more easy to understand

    return 0;
}