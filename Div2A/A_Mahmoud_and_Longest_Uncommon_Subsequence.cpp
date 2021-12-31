#include <bits/stdc++.h>

int main() {
    std::string a,b;
    std::cin>>a>>b;

    if (a.compare(b) == 0)
        std::cout<<-1;
    else
        std::cout<<std::max(a.size(),b.size());
}