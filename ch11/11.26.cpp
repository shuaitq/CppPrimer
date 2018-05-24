#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> m;

    // we can use key_type to access map
    map<string, int>::key_type str = "Tom";
    m[str] = 1;

    // the return value of map is a left-value of mapped_type

    cout << (typeid(decltype(m[str])) == typeid(map<string, int>::mapped_type)) << endl;

    return 0;
}