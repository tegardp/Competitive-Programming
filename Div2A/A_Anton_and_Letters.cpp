#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::string s;
    std::getline(std::cin, s);
    std::vector<char> v;
    for(auto i: s) {
        if(isalpha(i) == 0) continue;
        if(v.size() != 0) {
            if(std::find(v.begin(), v.end(), i) == v.end()) {
                v.push_back(i);
            }
        } else {
            v.push_back(i);
        }
    }

    std::cout<<v.size();
}