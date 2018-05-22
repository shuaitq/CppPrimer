#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>
#include <queue>

using namespace std;

void print_deque(deque<int> v)
{
    for(const auto &i : v)
    {
        cout << i << ' ';
    }
    cout << endl;
}

int main()
{
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    deque<int> insert, front, back;

    copy(v.begin(), v.end(), back_inserter(back));
    copy(v.begin(), v.end(), front_inserter(front));
    copy(v.begin(), v.end(), inserter(insert, insert.begin()));

    print_deque(back);
    print_deque(front);
    print_deque(insert);

    return 0;
}