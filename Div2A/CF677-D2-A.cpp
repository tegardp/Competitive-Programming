#include <iostream>

int main() {
    int n,h,x;
    int counter(0);

    std::cin>>n>>h;

    while(n>0) {
        std::cin>>x;
        if (x > h) 
            counter += 2;
        else
            counter += 1;
        
        n--;
    }

    std::cout<<counter;
}