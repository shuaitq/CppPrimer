#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char ch1[] = "Hello,", ch2[] = "C++!", ch3[100];

    strcpy(ch3, ch1);
    strcat(ch3, " ");
    strcat(ch3, ch2);

    cout << ch3 << endl;

    return 0;
}