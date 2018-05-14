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
        string letter = grade < 60 ? scores[0] : scores[(grade - 50) / 10];
        letter += (grade == 100 || grade < 60) ? "" : (grade % 10 > 7) ? "+" : (grade % 10 < 3) ? "-" : "";
        
        cout << letter << endl;
    }

    return 0;
}