#include <bits/stdc++.h>

int main() {
    std::vector<long long> v;
    long long s; 
    int count(0);

    for (int i = 0; i < 4; i++) { 
        std::cin>>s;
        v.push_back(s);
    }

    std::sort(v.begin(), v.end());

    for (int i = 0; i < 3; i++) {
        if(v[i] == v[i+1]) {
            count++;
        }
    } 

    std::cout<<count;
}