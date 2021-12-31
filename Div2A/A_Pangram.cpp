#include <bits/stdc++.h>

int main() {
    int n;
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string str;
    std::cin>>n>>str;
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ return std::tolower(c);});
    std::sort(str.begin(), str.end());
    auto last = std::unique(str.begin(), str.end());
    str.erase(last, str.end());

    if(str.compare(alphabet) == 0 ){
        std::cout<<"YES";
    } else {
        std::cout<<"NO";
    }
}