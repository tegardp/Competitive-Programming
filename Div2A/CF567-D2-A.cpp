#include <bits/stdc++.h>

int main() {
    int n;
    std::cin>>n;
    long x;
    std::vector<long> v;

    for (int i; i<n; i++) {
        std::cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    for (int i = 0; i < n; i++)
    {
        long min, max;
        if(i == 0) {
            min = abs(v[i] - v[i+1]);
            max = abs(v[i] - v[n-1]);
        } else if (i == n-1) {
            min = abs(v[i] - v[i-1]); 
            max = abs(v[i] - v[0]);
        } else {
            if(abs(v[i] - v[i-1]) < abs(v[i] - v[i+1]))
                min = abs(v[i] - v[i-1]);
            else
                min = abs(v[i] - v[i+1]); 
            if (abs(v[i] - v[0]) > abs(v[i] - v[n-1]))
                max = abs(v[i] - v[0]);
            else
                max = abs(v[i] - v[n-1]);
        }
        std::cout<<min<<" "<<max<<std::endl;
    }
}