#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r;

    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    auto &g = ci;

    a = 42;
    // legal, a is a int and will become 42

    b = 42;
    // legal, b is a int and will become 42

    c = 42;
    // legal, c is a int and will become 42

    //d = 42;
    // illegal, d is a int *, we should use *d = 42

    //e = 42;
    // illegal, e is a const int *, we can't change its' value

    //g = 42;
    // illegal, g is a const int &, we can't change its' value

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    return 0;
}