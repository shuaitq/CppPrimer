#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void f()
{
    cout << "void f()" << endl;
}

void f(int a)
{
    cout << "void f(int)" << endl;
}

void f(int a, int b)
{
    cout << "void f(int, int)" << endl;
}

void f(double a, double b = 3.14)
{
    cout << "void f(double, double)" << endl;
}

int main()
{
    // f(2.56, 42);
    // illegal, 2.56 match double but 42 match int

    f(42);
    // legal, match f(int)

    f(42, 0);
    // legal, match f(int, int)

    f(2.56, 3.14);
    // legal, match f(double, double)

    // void f(int)
    // void f(int, int)
    // void f(double, double)

    return 0;
}