#include <iostream>
#include <vector>
#include <algorithm>

int getIndex(std::vector<int> v, int K);

int main() {
    int n;
    std::vector<int> v;
    std::cin>>n;

    while(n) {
        int x;
        std::cin>>x;
        v.push_back(x);
        n--;
    }

    for (int i = 0; i < v.size(); i++) {
        if(i!=0) std::cout<<" ";
        std::cout<<getIndex(v, i+1) + 1;
    }
}

int getIndex(std::vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);
    if (it != v.end())
    {
        int index = it - v.begin();
        return index;
    }
    else {
        return -1;
    }
}