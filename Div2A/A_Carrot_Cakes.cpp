#include <iostream>
#include <cmath>

int main() {
    int n,t,k,d, time;
    int first_oven, second_oven;

    std::cin>>n>>t>>k>>d;
    first_oven = std::ceil(n * 1.0 / k) * t; 
    second_oven = (n - std::ceil(d * 1.0 / t) * k);
    if(first_oven <= second_oven) std::cout<<second_oven;
    else std::cout<<second_oven;
}