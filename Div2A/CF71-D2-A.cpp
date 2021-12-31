#include <iostream>

int main() {
    int n, count(0);
    std::string s;
    std::cin>>n;

    while(n>0) {
        std::cin>>s;
        if (s.length()<=10)
        {
            std::cout<<s;
        } else {
            std::cout<<s[0]<<s.length()-2<<s[s.length()-1];
        }
        std::cout<<"\n";
        n--;
    }
    
    
}