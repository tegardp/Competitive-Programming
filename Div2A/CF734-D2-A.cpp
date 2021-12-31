#include <iostream>
#include <string.h>

int main() {
    int n, a(0),d(0);
    char x;

    std::cin>>n;

    while(n>0) {
        std::cin>>x;
        if (x == 'A') 
            a++;
        else
            d++;
        n--;
    }

    if (a>d)
        std::cout<<"ANTON";
    else if(a<d) 
        std::cout<<"DANIK";
    else 
        std::cout<<"Friendship";
}