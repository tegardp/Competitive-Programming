#include <iostream>

int main() {
    int n, x, i(0);

    std::cin>>n;
    int arr[n];
    while(i<n) {
        std::cin>>x;
        arr[i] = x;
        i++;
    }

    for(int i = 0; i<n-1; i++) {
        for(int j = i+1; j<n;j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i= 0; i<n; i++) {
        std::cout<<arr[i]<<" ";
    }
}