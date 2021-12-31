#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int lower(0), upper(0);
    std::string str;
    std::cin>>str;

    int size = str.size();
    for (int i = 0; i<size; i++) {
        if(isupper(str[i])) {
            upper++;
        } else {
            lower++;
        }
    }

    if(upper>lower) {
        std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) { return std::toupper(c);});
    } else {
        std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) { return std::tolower(c);});
    }

    std::cout<<str;
}
