#include <iostream>

using namespace std;

int main()
{
    int size;

    cin >> size;

    char *str = new char[size + 1];

    cin.ignore();
    cin.get(str, size + 1);

    cout << str;

    // if longer than size, we will lost the characters which are out of range

    return 0;
}