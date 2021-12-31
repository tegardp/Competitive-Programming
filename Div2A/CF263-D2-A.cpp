#include <iostream>
#include <cmath>

int main() {
    int input, x,y, moves, i(1),j(1);

    while(i<=5) {
        j = 1;
        while(j<=5) {
            std::cin>>input;
            if(input == 1) {
                x = i;
                y = j;
            }
            j++;
        }
        i++;
    }

    moves = std::abs(x-3) + std::abs(y-3);
    std::cout<<moves;
}