#include <bits/stdc++.h>

int main() {
    int pos(0);
    std::string s, t;
    std::cin>>s>>t;

    for (int i = 0; i < t.size(); i++) {
        if (t[i] == s[pos]) pos++;
    }
    std::cout<<pos+1;
}