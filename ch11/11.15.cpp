#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    // mapped_type = vector<int>
    cout << (typeid(vector<int>) == typeid(map<int, vector<int>>::mapped_type)) << endl;

    // key_type = int
    cout << (typeid(int) == typeid(map<int, vector<int>>::key_type)) << endl;

    // value_type = pair<const int, vector<int>>
    cout << (typeid(pair<const int, vector<int>>) == typeid(map<int, vector<int>>::value_type)) << endl;

    return 0;
}