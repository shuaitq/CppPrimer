#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    unordered_map<string, int> um;
    vector<string> v = { "apple", "apple", "egg", "egg", "egg", "duck" };

    for(const auto &s : v)
    {
        ++ um[s];
    }

    // cout << um.bucket_count() << endl;
    // cout << um.max_bucket_count() << endl;
    // cout << um.bucket("apple") << endl;
    // cout << um.load_factor() << endl;
    // cout << um.max_load_factor() << endl;

    for(const auto &p : um)
    {
        cout << p.first << ' ' << p.second << " time(s)" << endl;
    }

    return 0;
}