#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    int grade;
    vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
    
    while(cin >> grade)
    {
        string letter;
        if(grade < 60)
        {
            letter = scores[0];
        }
        else
        {
            letter = scores[(grade - 50) / 10];
            if(grade != 100)
            {
                letter += grade % 10 > 7 ? "+" : grade % 10 < 3 ? "-" : "";
            }
        }
        cout << letter << endl;
    }

    return 0;
}