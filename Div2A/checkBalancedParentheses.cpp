#include <iostream>
#include <stack>
#include <regex>
using namespace std;
bool checkParentheses(string str) {
    stack<char> S;
    for (int i = 0; i < str.length(); i++)
    {
        if(S.empty()) {
            S.push(str[i]);
        } else {
            if (S.top() == '[' && str[i] == ']' || S.top() == '(' && str[i] == ')' || S.top() == '{' && str[i] == '}')
                S.pop();
            else
                S.push(str[i]);
        }
    }
    if (S.empty())
        return true;
    return false;
}

int main() {
    string str;
    cin>>str;
    regex r("[^()\\[\\]\\{\\}]*");
    str = regex_replace(str,r,"");
    cout<<checkParentheses(str);
}