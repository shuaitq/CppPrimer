#include <iostream>

int main()
{
    std::cout << "/*";
    std::cout << "*/";

    // Wrong
    // std::cout << /* "*/" */;
    // Modify
    std::cout << /* "*/" */";

    std::cout << /* "*/" /* "/*" */;

    return 0;
}