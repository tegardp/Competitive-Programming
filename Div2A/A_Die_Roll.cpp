#include <bits/stdc++.h>

long gcd(long a, long b);
void as_frac(double input);

int main() {
    int y,w,dot,max;
    double p;

    std::cin>>y>>w;
    max = std::max(y,w);

    p = (7 - max) / 6.0;

    if (p == 0) {
        std::cout<<"0/1";
    } else if (p == 1) {
        std::cout<<"1/1";
    } else {
        as_frac(p);        
    }
}

long gcd(long a, long b) {
    if (a == 0) return b;
    if (b == 0) return a;

    if (a < b) return gcd(a, b % a);
               return gcd(b, a % b);
}

void as_frac(double input) {
    double integral = std::floor(input);
    double frac = input -integral;
    const long precision = 1000000000;

    long gcd_ = gcd(round(frac * precision), precision);

    long denominator = precision / gcd_;
    long numerator = round(frac * precision) / gcd_;
    std::cout<<numerator<<"/"<<denominator;
}