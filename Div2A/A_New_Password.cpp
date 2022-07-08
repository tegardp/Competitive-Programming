#include <bits/stdc++.h>

int main() {
    int n, distinct;
    char cch;
    std::string s;
    std::vector<char> rand_char, password;
    std::cin>>n>>distinct;
    while(distinct) {
        do {
            cch = 'a' + rand() % 26;
        } while ((std::find(rand_char.begin(), rand_char.end(), cch) != rand_char.end()));

        rand_char.push_back(cch);
        password.push_back(cch);

        distinct--;
    }
    while(password.size() <n ){
        for(char i: rand_char) {
            if (password.size() >= n) break;

            password.push_back(i);
        }
    }
    for(char i : password){
        std::cout<<i;
    }
}