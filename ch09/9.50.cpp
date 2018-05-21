#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int sum(vector<string> num)
{
    int sum = 0;

    for(const auto &s : num)
    {
        sum += stoi(s);
    }
    
    return sum;
}

double sums(vector<string> nums)
{
    double sum = 0;

    for(const auto &s : nums)
    {
        sum += stod(s);
    }

    return sum;
}

int main()
{
    vector<string> num = { "123", "321", "1", "2", "22222" };

    cout << sum(num) << endl;

    vector<string> nums = { "123.123", "321.321", "1.1", "2.2", "22222.0" };

    cout << sums(nums) << endl;

    return 0;
}