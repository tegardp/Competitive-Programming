#include<iostream>
#include<cmath>
int main() {
    int n,t,k,d;
    std::cin>>n>>t>>k>>d;

    float worst_case = std::ceil((float)n/k) * t;
    float best_case = t+d;

    if(best_case<worst_case) {
        std::cout<<"YES";
    } else {
        std::cout<<"NO";
    }
}