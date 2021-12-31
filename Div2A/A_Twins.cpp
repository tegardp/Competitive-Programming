#include <bits/stdc++.h>

int main() {
    int n, x, mid, nsum(0), count(0);
    std::vector<int> v1;
    std::cin>>n;

    for (int i = 0; i < n; i++)
    {
        std::cin>>x;
        v1.push_back(x);
    }
    sort(v1.begin(), v1.end());
    mid = std::accumulate(v1.begin(), v1.end(), 0)/2;

    for(int i = v1.size() - 1; i>=0; i--){
        if(nsum > mid)
            break;
        nsum += v1[i];
        count++;
    }
    std::cout<<count;
}