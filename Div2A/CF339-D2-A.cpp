#include<bits/stdc++.h>

int main() {
    std::string str;
    std::vector<char> num;
    std::queue<char> operands;

    std::cin>>str;

    if (str.length() == 1)
    {
        std::cout<<str;
        return 0;
    }
    
    for (int i = 0; i < str.length(); i++)
    {
        if(std::isdigit(str[i]))
            num.push_back(str[i]);
        else
            operands.push(str[i]);
    }
    std::sort(num.begin(), num.end());

    for (int i = 0; i < num.size(); i++)
    {
        std::cout<<num[i];
        if(!operands.empty()) {
            std::cout<<operands.front();
            operands.pop();
        }
        
    }
}