#include <iostream>

int main() {
    int n;
    std::cin>>n;

    while(n) {
        std::string s;
        std::cin>>s;

        if (s.length() - 2 >= 10)
            std::cout<<s[0]<<s.size() - 2<<s[s.size()-1]<<std::endl;
        else
            std::cout<<s<<std::endl;

        n--;
    }
}