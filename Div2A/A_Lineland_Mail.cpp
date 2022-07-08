#include <iostream>
#include <vector>

int main() {
    int n;
    std::vector<long long> v;
    std::cin>>n;

    while(n) {
        long long x;
        std::cin>>x;
        v.push_back(x);

        n--;
    }

    for (int i = 0; i < v.size(); i++)
    {
        long long min, max, left, right;

        if (i == 0) {
            min = abs(v[i] - v[i+1]);
        }

        if (i == v.size() - 1) {
            min = abs(v[i] - v[i-1]);
        }

        if(i != 0 && i != v.size()-1) {
            left = abs(v[i] - v[i-1]);
            right = abs(v[i] - v[i+1]);
            min = left < right? left : right;
        }

        left = abs(v[i] - v[0]);
        right = abs(v[i] - v[v.size() -1]);
        max = left > right ? left : right;
        std::cout<<min<<" "<<max<<std::endl;
    }
    
}