#include <iostream>
#include <string>

int main() {
    int count(1);
    std::string str;
    std::cin>>str;

    int size = str.size();
    for(int i=0; i<size-1; i++) {
        for(int j=i+1; j<size; j++) {
            if (str[i] == str[j]) {
                count--;
                break;
            }
        }
        count++;
    }
    if (count % 2 == 0) {
        std::cout<<"CHAT WITH HER!";
    } else {
        std::cout<<"IGNORE HIM!";
    }
}
