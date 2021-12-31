#include <bits/stdc++.h>

void insertionSort(int arr[5]) {
    int i, j, key;
    for (int i = 0; i < 5; i++)
    {
        key = arr[i];
        j = i -1;

        while (j>=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}

void bubbleSort(int arr[5]) {
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j<4; j++) {
            if (arr[j+1]<arr[j])
            {
                std::swap(arr[j+1],arr[j]);
            }
            
        }
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}

void simpleSort(int arr[]) {
    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if (arr[j]<arr[i])
            {
                std::swap(arr[j],arr[i]);
            }
            
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}

void selectionSort(int arr[5]) {
    int temp;
    for (int i = 0; i < 5-1; i++)
    {
        temp=i;
        for (int j = i+1; j<5; j++) {
            if (arr[j]<arr[temp])
            {
                temp = j;
            }
        }
        std::swap(arr[i],arr[temp]);
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
}

int main() {
    int a[5] = {5,3,6,7,1};
    simpleSort(a);
    selectionSort(a);
    bubbleSort(a);
    insertionSort(a);
}