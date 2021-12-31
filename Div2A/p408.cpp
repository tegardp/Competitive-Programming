#include <bits/stdc++.h>

int main() {
    int step, mod, x(0);
    std::string selection = "Good Choice";

    while(true) {
        std::cin>>step>>mod;
        std::cout<<"\n";
    
        for (int i = 0; i<mod-1; i++) {
            x = (x + step) % mod;
            if (x == 0) {
                selection = "Bad Choice";
                break;
            }
        }


        std::cout<<std::setw(10)<<std::right<<step<<std::setw(20)<<std::right<<mod<<"\t"<<selection;
    }
}