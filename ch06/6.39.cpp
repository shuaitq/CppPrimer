#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int calc(int, int);
int calc(const int, const int);
// legal

int get();
double get();
// illegal, only return type is different

int *rest(int *);
double *reset(double *);
// legal

int main()
{
    
    return 0;
}