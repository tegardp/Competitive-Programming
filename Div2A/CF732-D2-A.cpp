#include <iostream>

int main() {
    int k, r, count(1);
    std::cin>>k>>r;

    while(true) {
        if ((k * count) % 10 == 0)
            break;
        else if((k * count -r) % 10 == 0)
            break;
        
        count++;
    }
    std::cout<<count;
}