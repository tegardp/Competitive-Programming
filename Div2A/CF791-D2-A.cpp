#include <iostream>

int main() {
    int a,b, counter(0);

    std::cin>>a>>b;

    while(a>b) {
            a = 3 * a;
            b = 2 * b;
            counter++;
    }

    std::cout<<counter;
}