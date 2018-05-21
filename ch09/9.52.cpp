#include <iostream>
#include <stack>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::stack;
using std::string;

int main()
{
    string expression = "This is (Tom Smith).";
    bool flag = false;
    stack<char> s;

    for(const auto &c : expression)
    {
        if(c == '(')
        {
            flag = true;
            continue;
        }
        else if(c == ')')
        {
            flag = false;
        }

        if(flag)
        {
            s.push(c);
        }
    }

    string repstr;
    while(!s.empty())
    {
        repstr += s.top();
        s.pop();
    }

    expression.replace(expression.find('(') + 1, repstr.size(), repstr);

    cout << expression << endl;

    return 0;
}