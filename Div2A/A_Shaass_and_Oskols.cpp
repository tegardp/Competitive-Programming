#include <bits/stdc++.h>
#include <vector>

void shoot(std::vector<int>& v, int y, int x);

int main() {
    int n,m;
    std::vector<int> v1;
    std::vector<std::vector<int>> v2;
    std::cin>>n;

    while(n) {
        int a;
        std::cin>>a;
        v1.push_back(a);
        n--;
    }

    std::cin>>m;

    while(m) {
        int y,x;
        std::cin>>y>>x;
        v2.push_back({y,x});
        m--;
    }
    
    for(auto i: v2) {
        shoot(v1, i[0], i[1]);
    }

    for(auto i: v1) {
        std::cout<<i<<std::endl;
    }
}

void shoot(std::vector<int>& v, int y, int x) {
    if (y > 1) {
        v[y-2] = v[y-2] + x - 1;
    }
    if (y < v.size()) {
        v[y] = v[y] + v[y-1] - x; 
    }
    v[y-1] = 0;
}