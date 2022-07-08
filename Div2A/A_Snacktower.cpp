#include <bits/stdc++.h>

int main() {
    int n, order;
    std::map<int, bool> m;
    std::cin>>n;

    order = n;
    for (int i = 0; i < n; i++)
    {
        int x;
        std::cin>>x;
        m[x] = true;

        if(x != order) std::cout<<std::endl;

        if (x == order) {
            while (m[x])
            {
                std::cout<<x<<" ";
                x--;
                order--;
            }            
            std::cout<<std::endl;
        }
    }
}