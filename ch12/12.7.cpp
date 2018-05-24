#include <iostream>
#include <vector>
#include <memory>

using namespace std;

shared_ptr<vector<int>> create_vector()
{
    return make_shared<vector<int>>();
}

void input(shared_ptr<vector<int>> v)
{
    int num;
    while(cin >> num)
    {
        v->push_back(num);
    }
}

void print(shared_ptr<vector<int>> v)
{
    for(const auto &i : *v)
    {
        cout << i << ' ';
    }
    cout << endl;
}

int main()
{
    shared_ptr<vector<int>> v;

    v = create_vector();

    input(v);

    print(v);

    return 0;
}