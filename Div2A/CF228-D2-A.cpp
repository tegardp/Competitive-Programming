#include<iostream>
#include<algorithm>
int main() {
    int x, arr[4], count(1);

    for (int i = 0; i < 4; i++)
    {
        std::cin>>x;
        arr[i] = x;
    }

    std::sort(arr, arr+4);

    for (int i = 0; i < 3; i++)
    {
        if(arr[i] != arr[i+1])
            count++;
    }

    std::cout<<4-count;
}