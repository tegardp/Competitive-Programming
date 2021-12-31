#include <iostream>
#include <string>

int main() {
    int x, sum(0);
    std::string str;
    int a[4];
    
    for (int i =0; i<4; i++) {
        std::cin>>x;
        a[i] = x;
    }

    std::cin>>str;
    int str_len = size(str);
    for(int i=0; i<str_len; i++) {
        sum += a[str[i]-'0'-1];
    }
        std::cout<<sum;
}