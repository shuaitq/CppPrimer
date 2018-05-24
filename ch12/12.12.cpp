#include <iostream>
#include <memory>

using namespace std;

void process(shared_ptr<int> ptr)
{

}

int main()
{
    auto p = new int();
    auto sp = make_shared<int>();

    process(sp);
    // legal, just copy sp to process

    process(new int());
    // illegal, normal pointer can't convert to smart pointer automatic

    process(p);
    // illegal, normal pointer can't convert to smart pointer automatic

    process(shared_ptr<int>(p));
    // legal, but it is a bad practice

    return 0;
}