#include <iostream>

int main() {
    int n,x;
    std::cin>>n;
    int arr[n];

    for(int i =0; i<n; i++) {
        std::cin>>x;
        arr[x-1] = i+1;
    }

    for (int i = 0; i < n; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    
}