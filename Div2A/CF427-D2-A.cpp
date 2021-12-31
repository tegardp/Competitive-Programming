#include <iostream>

int main() {
    int n,x, hired(0), untreated(0);

    std::cin>>n;

    while(n>0) {
        std::cin>>x;
        if (x == -1)
        {
            if (hired==0)
            {
                untreated++;
            } else {
                hired--;
            }
        } else {
            hired += x;
        }
        n--;
    }
    std::cout<<untreated;
}