#include<iostream>
#include<string>

int main() {
    int n, count(1);
    std::string str, prev("");
    std::cin>>n;

    while(n>0) {
        std::cin>>str;
        if(str != prev && prev != "") {
            count++;
        }
        prev = str;
        n--;
    }

    std::cout<<count;
}