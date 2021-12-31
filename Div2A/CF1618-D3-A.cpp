#include <bits/stdc++.h>

int main() {
    int n,x;
    std::vector<int> b;
    std::cin>>n;

    while(n>0) {
        b.clear();
        for (int i = 0; i < 7; i++)
        {
            std::cin>>x;
            b.push_back(x);
        }
        std::vector<int>::iterator itr = std::find(b.begin(), b.end(), (b[6] - b[0] - b[1]));
        
        std::cout<<b[0]<<" "<<b[1]<<" "<<b[std::distance(b.begin(), itr)]<<std::endl;        
        n--;
    }
}