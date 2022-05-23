#include <iostream>

int main() {
    int m,n, pos, result;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cin>>pos;
            if(pos == 1) {
                m = i;
                n = j;
            }
        }
    }

    result = std::abs(m-2) + std::abs(n-2);
    std::cout<<result;
}