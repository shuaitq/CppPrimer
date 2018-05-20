#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

void capacity(int num)
{
    vector<string> svec;
    svec.reserve(1024);
    string word;

    for(int i = 0; i < num; ++ i)
    {
        svec.push_back("");
    }
    
    svec.resize(svec.size() + svec.size() / 2);

    cout << "num:" << num << endl;
    cout << "size:" << svec.size() << endl;
    cout << "capacity:" << svec.capacity() << endl;
}

int main()
{
    capacity(256);
    capacity(512);
    capacity(1000);
    capacity(1048);

    // num:256
    // size:384
    // capacity:1024
    // num:512
    // size:768
    // capacity:1024
    // num:1000
    // size:1500
    // capacity:2000
    // num:1048
    // size:1572
    // capacity:2048

    return 0;
}