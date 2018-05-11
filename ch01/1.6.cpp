#include <iostream>

int main()
{
    int a, b;

    std::cin >> a >> b;
    // Wrong Sample
    // std::cout << "The sum of " << a;
    //           << " and " << b;
    //           << " is " << a + b << std::endl

    // Error Message
    // 1.6.cpp: In function ‘int main()’:
    // 1.6.cpp:10:15: error: expected primary-expression before ‘<<’ token
    //                << " and " << b;
    //                ^~
    // 1.6.cpp:11:15: error: expected primary-expression before ‘<<’ token
    //                << " is " << a + b << std::endl
    //                ^~
    
    // Correct Sample
    std::cout << "The sum of " << a
              << " and " << b
              << " is " << a + b << std::endl;

    return 0;
}