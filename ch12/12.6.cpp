#include <iostream>
#include <vector>

using namespace std;

vector<int> *create_vector()
{
    return new vector<int>();
}

void input(vector<int> *v)
{
    int num;
    while(cin >> num)
    {
        v->push_back(num);
    }
}

void print(vector<int> *v)
{
    for(const auto &i : *v)
    {
        cout << i << ' ';
    }
    cout << endl;
}

int main()
{
    vector<int> *v;

    v = create_vector();

    input(v);

    print(v);

    delete v;
    return 0;
}