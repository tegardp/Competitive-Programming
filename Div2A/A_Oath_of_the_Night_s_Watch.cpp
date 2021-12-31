#include <bits/stdc++.h>

int main() {
    int n,x;
    std::list<int> my_list;

    std::cin>>n;

    for (int i = 0; i<n; i++)
    {
        std::cin>>x;
        my_list.push_back(x);
    }
    my_list.sort();
    if(n<2) {
        std::cout<<0;
        return 0;
    } else {
        my_list.remove(my_list.front());
        my_list.remove(my_list.back());
        std::cout<<my_list.size();
    }
}