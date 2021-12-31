#include <iostream>

int main() {
    int a,b;

    std::cin>>a>>b;
    int* ptrA = &a;
    int* ptrB = &b;

    std::cout<<a<<" "<<b<<" "<<*ptrA<<" "<<*ptrB<<" "<<ptrA<<" "<<ptrB;
}