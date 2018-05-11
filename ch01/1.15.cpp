#include <iostream>

int main()
{
    // std::cout << "Read each file." << std::endl:
    // 1.15.cpp: In function ‘int main()’:
    // 1.15.cpp:5:48: error: expected ‘;’ before ‘:’ token
    //      std::cout << "Read each file." << std::endl:
    //                                                 ^

    // std::cout << Update master. << std::endl;
    // 1.15.cpp: In function ‘int main()’:
    // 1.15.cpp:11:18: error: ‘Update’ was not declared in this scope
    //     std::cout << Update master. << std::endl;
    //                 ^~~~~~
    // 1.15.cpp:11:18: note: suggested alternative: ‘getdate’
    //     std::cout << Update master. << std::endl;
    //                 ^~~~~~
    //                 getdate

    // std::cout << "Write new master." std::endl;
    // 1.15.cpp: In function ‘int main()’:
    // 1.15.cpp:21:38: error: expected ‘;’ before ‘std’
    //     std::cout << "Write new master." std::endl;
    //                                     ^~~

    // return 0
    // 1.15.cpp: In function ‘int main()’:
    // 1.15.cpp:28:1: error: expected ‘;’ before ‘}’ token
    // }
    // ^

    // int a = "Hello, World.";
    // 1.15.cpp: In function ‘int main()’:
    // 1.15.cpp:33:13: error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]
    //     int a = "Hello, World.";
    //             ^~~~~~~~~~~~~~~

    // cout << "Hello, World." << std::endl;
    // 1.15.cpp: In function ‘int main()’:
    // 1.15.cpp:39:5: error: ‘cout’ was not declared in this scope
    //     cout << "Hello, World." << std::endl;
    //     ^~~~
    // 1.15.cpp:39:5: note: suggested alternative:
    // In file included from 1.15.cpp:1:0:
    // /usr/include/c++/7/iostream:61:18: note:   ‘std::cout’
    // extern ostream cout;  /// Linked to standard output
    //                 ^~~~

    return 0;
}