#include<iostream>
#include<algorithm>

int main() {
    std::string a, b;
    std::cin>>a>>b;
    std::transform(a.begin(), a.end(), a.begin(), ::toupper);
    std::transform(b.begin(), b.end(), b.begin(), ::toupper);
    if (a>b)
    {
        std::cout<<1;
    }
    else if (a<b)
    {
        std::cout<< -1;
    }
    else
    {
        std::cout<<0;
    }
    
}