#include <bits/stdc++.h>

int main() {
    std::string a,b;
    std::cin>>a>>b;
    std::vector<int> longest;

    for (int i = 1; i <= a.length(); i++)
    {
        for (int j = 0; j <= a.length()-i; j++)
        {
            if(b.find(a.substr(j,i)) == std::string::npos) {
                longest.push_back(i);
            }
        }
    }

    for (int i = 1; i <= b.length(); i++)
    {
        for (int j = 0; j <= b.length()-i; j++)
        {
            if(a.find(b.substr(j,i)) == std::string::npos) {
                longest.push_back(i);
            }
        }
    }

    if (longest.empty())
        std::cout<<-1;
    else
        std::cout<<*max_element(longest.begin(), longest.end());
}