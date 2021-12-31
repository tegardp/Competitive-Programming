#include <iostream>
#include <vector>

int main() {
    int n, x, i(0), j(0), solution(0), counter(0);
    std::cin>>n;

    while (i<n) {
        solution = 0;
        j = 0;
        while(j<3) {
            std::cin>>x;
            solution += x;
            j++;
        }
        if (solution >=2 ) {
            counter++;
        }
        i++;
    }

    std::cout<<counter;
}