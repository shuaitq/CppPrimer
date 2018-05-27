#include <iostream>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<double> p(new double(10));
    unique_ptr<double> p2 = p;

    // 12.16.cpp: In function ‘int main()’:
    // 12.16.cpp:9:29: error: use of deleted function ‘std::unique_ptr<_Tp, _Dp>::unique_ptr(const std::unique_ptr<_Tp, _Dp>&) [with _Tp = double; _Dp = std::default_delete<double>]’
    //      unique_ptr<double> p2 = p;
    //                              ^
    // In file included from /usr/include/c++/7/memory:80:0,
    //                  from 12.16.cpp:2:
    // /usr/include/c++/7/bits/unique_ptr.h:388:7: note: declared here
    //        unique_ptr(const unique_ptr&) = delete;
    //        ^~~~~~~~~~

    return 0;
}