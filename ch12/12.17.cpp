#include <iostream>
#include <memory>

using namespace std;

int main()
{
    int ix = 1024, *pi = &ix, *pi2 = new int(2048);

    typedef unique_ptr<int> IntP;

    IntP p0(ix);
    // illegal, can't use a int to init unique_ptr

    IntP p1(pi);
    // illegal, because pi is not a new object, be can't use unique_ptr

    IntP p2(pi2);
    // illegal, unique_ptr will free the object and pi2 will become a dangling pointer

    IntP p3(&ix);
    // illegal, because &ix is not a new object, be can't use unique_ptr

    IntP p4(new int(2048));
    // legal

    IntP p5(p2.get());
    // illegal, this will cause double free, because p5 and p2 point to same object

    return 0;
}