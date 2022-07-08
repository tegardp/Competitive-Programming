#include <bits/stdc++.h>

int main() {
    std::string s, t, new_s;
    std::cin>>s;
    std::vector<int> v;
    std::istringstream ss(s);

    while(std::getline(ss, t, '+')){
        v.push_back(stoi(t));
    }
    std::sort(v.begin(), v.end());

    for(int i = 0; i< v.size(); i++) {
        if(i != 0) { 
            new_s += '+';
        }
        new_s += std::to_string(v[i]);
    }

    std::cout<<new_s;
}