#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

int main() {
    std::string a,b;
    std::cin>>a>>b;
    std::transform(a.begin(), 
                   a.end(), 
                   a.begin(), 
                   [](unsigned char c) {
                       return std::tolower(c);
    });
    std::transform(b.begin(), 
                   b.end(), 
                   b.begin(), 
                   [](unsigned char c) {
                       return std::tolower(c);
    });

    if (a>b) {
        std::cout<<1;
    } else if (a<b) {
        std::cout<<-1;
    } else {
        std::cout<<0;
    }
}