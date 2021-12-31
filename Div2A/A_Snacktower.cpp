#include <bits/stdc++.h>

const int MAXN = 1e5+7;
int main() {
    int n,x, next;
    int a[MAXN];
    std::cin>>n;
    
    next = n;
    for (int i = 1; i <= n; i++)
    {
        std::cin>>x;
        a[x] = 1;
        while(a[next]) {
            std::cout<<next<<" ";
            next--;
        }
        std::cout<<std::endl;
    }
}