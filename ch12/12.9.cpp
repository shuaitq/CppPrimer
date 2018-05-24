#include <iostream>
#include <memory>

using namespace std;

int main()
{
    int *q = new int(42), *r = new int(100);
    r = q;
    // new two elements, one is q point to 42
    // another is r point 100
    // make r point to q, r and q point to 100 element
    // element 42 unaccessble, become a leak

    auto q2 = make_shared<int>(42), r2 = make_shared<int>(100);
    r2 = q2;
    // new two elements, one is q point to 42
    // another is r point 100
    // make r point to q, r and q point to 100 element
    // element 42 because no shared_ptr point to it, delete automatic

    return 0;
}