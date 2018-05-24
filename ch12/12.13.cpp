#include <iostream>
#include <memory>

using namespace std;

int main()
{
    auto sp = make_shared<int>();
    auto p = sp.get();

    delete p;

    // this will cause double free
    // delete p free once
    // and end of main
    // smart point sp will free again

    return 0;
}