#include <iostream>

int main() {
    int n;
    bool button;

    do {
        std::cin>>n;
        button = false;
        for (int i = 1; i <= n; i++)
        {
            if(n % i == 0) {
                button = !button;
            }
        }
        if (button)
        {
            std::cout<<"yes"<<"\n";
        } else {
            std::cout<<"no"<<"\n";
        } 
    } while (n>0);
}