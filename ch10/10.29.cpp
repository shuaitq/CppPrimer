#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iterator>

using namespace std;

int main()
{
    ifstream ifs("data.txt");
    istream_iterator<string> it(ifs), end;

    vector<string> v(it, end);

    for(const auto &i : v) 
    {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}