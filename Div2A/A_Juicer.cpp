#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n,b,d, count(0), sum(0);
    std::cin>>n>>b>>d;

    while(n) {
        int a;
        std::cin>>a;

        if (sum <= d) {
            sum += a;
        }
        if (sum > d) {
            sum = 0;
            count++;
        }
        n--;
    }

    std::cout<<count;
}