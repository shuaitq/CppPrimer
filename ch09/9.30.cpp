#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

class test
{
public:
    test(int a):num(a){}
private:
    int num;
};

int main()
{
    // must have a initializer or a default constructor
    vector<test> v(10, 1);

    v.resize(20);

    return 0;
}