#include <iostream>
#include <string>

int main() {
    int n, count(1);
    std::string x, str;
    std::cin>>n;

    for(int i = 0; i<n; i++) {
        std::cin>>x;
        str += x[0];
    }

    for(int i=0; i<n-1; i++) {
        if (str[i] != str[i+1]) {
            count++;
        }
    }

    std::cout<<count;
}