#include<iostream>
#include<vector>

int main() {
    int n, h,a,count(0);
    std::vector<int> arr1, arr2;
    std::cin>>n;

    while (n>0)
    {
        std::cin>>h>>a;
        arr1.push_back(h);
        arr2.push_back(a);
        n--;
    }

    for (int element: arr1) {
        for(int atom: arr2) {
            if(element==atom) {
                count++;
            }
        }
    }
    std::cout<<count;
}