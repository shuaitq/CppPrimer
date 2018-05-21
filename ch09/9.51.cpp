#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Date
{
public:
    Date(string str)
    {
        if(str.find('/') != string::npos)
        {
            month = stoi(str);
            string temp = str.substr(str.find('/') + 1);
            day = stoi(temp);
            year = stoi(temp.substr(temp.find('/') + 1));
        }
        else if(str.find(',') != string::npos)
        {
            for(size_t i = 0; i < months.size(); ++ i)
            {
                if(str.substr(0, months[i].size()) == months[i])
                {
                    month = i + 1;
                    break;
                }
            }
            day = stoi(str.substr(str.find_first_of("0123456789")));
            year = stoi(str.substr(str.find_first_of("0123456789", str.find(','))));
        }
        else
        {
            for(size_t i = 0; i < short_months.size(); ++ i)
            {
                if(str.substr(0, short_months[i].size()) == short_months[i])
                {
                    month = i + 1;
                    break;
                }
            }
            string temp = str.substr(str.find_first_of("0123456789"));
            day = stoi(temp);
            year = stoi(temp.substr(temp.find(' ')));
        }
    }

    friend std::ostream &operator << (std::ostream &os, const Date &d)
    {
        cout << d.year << ' ' << d.month << ' ' << d.day;
    }
private:
    static const vector<string> months;
    static const vector<string> short_months;
    unsigned year, month, day;
};

const vector<string> Date::months = { "January", "February", "March", "April", "May", "June",
                                      "July", "August", "September", "October", "November", "December" };
const vector<string> Date::short_months = { "Jan", "Feb", "Mar", "Apr", "May", "Jun",
                                            "Jul", "Aug", "Sept", "Oct", "Nov", "Dec" };

int main()
{
    cout << Date("January 1, 1900") << endl;

    cout << Date("1/1/1990") << endl;

    cout << Date("Jan 1 1900") << endl;

    return 0;
}