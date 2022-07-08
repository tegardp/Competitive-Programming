#include <iostream>

int main() {
    int n, distress(0);
    long long x;
    std::cin>>n>>x;
    while(n) {
        char op;
        long long d;

        std::cin>>op>>d;
        
        if (op == '+') {
            x += d;
        }
        if (op == '-') {
            if(d > x) distress++;
            else x -= d;
        }
        n--;
    }
    std::cout<<x<<" "<<distress;
}