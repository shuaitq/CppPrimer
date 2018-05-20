#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> v;
    const int N = 50;

    for(int i = 0; i < N; ++ i)
    {
        v.push_back(i);
        cout << v.capacity() << ' ';
    }
    cout << endl;
    
    // 1 2 4 4 8 8 8 8 16 16 16 16 16 16 16 16 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32
    // 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64 64
    // in my computer is double capacity

    return 0;
}