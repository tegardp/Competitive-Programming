#include <iostream>

int main() {
    int k, r, i(1);

    std::cin>>k>>r;
    while(true) {
        if (k*i%10 == 0) break;
        if (k*i%10-r == 0) break;
        i++;
    }
    std::cout<<i;
}