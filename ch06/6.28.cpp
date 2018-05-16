#include <iostream>
#include <initializer_list>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;

void error_msg(ErrCode e, initializer_list<string> il)
{
    cout << e.msg() << ": ";
    // const string &
    for(const auto &elem : il)
        cout << elem << ' ';
    cout << endl;
}

int main(int argc, char *argv[])
{
    return 0;
}