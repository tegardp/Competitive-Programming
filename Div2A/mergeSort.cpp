#include <iostream>
#include <vector>

void merge(int v[], int left, int mid, int right) {
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;

    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
    
    for(int i = 0; i < subArrayOne; i++) {
        leftArray[i] = v[left+i];
    }
    for(int i = 0; i < subArrayTwo; i++) {
        rightArray[i] = v[mid+i+1];
    }

    int indexSubArrayOne(0), indexSubArrayTwo(0), initialIndex(left);
    while (indexSubArrayOne < subArrayOne && indexSubArrayTwo<subArrayTwo)
    {
        if (leftArray[indexSubArrayOne] <= rightArray[indexSubArrayTwo]) {
            v[initialIndex] = leftArray[indexSubArrayOne];
            indexSubArrayOne++;
        } else {
            v[initialIndex] = rightArray[indexSubArrayOne];
            indexSubArrayTwo++;
        }
        initialIndex++;
    }

    while (indexSubArrayOne < subArrayOne)
    {
        v[initialIndex] = leftArray[indexSubArrayOne];
        indexSubArrayOne++;
        initialIndex++;
    } 

    while (indexSubArrayTwo<subArrayTwo)
    {
        v[initialIndex] = rightArray[indexSubArrayOne];
        indexSubArrayTwo++;
        initialIndex++;
    }
}

void mergeSort(int v[], int begin, int end) {
    if (begin >= end)
        return;

    auto mid = begin + (end - begin) /2;
    mergeSort(v, begin,mid);
    mergeSort(v, mid + 1, end);
    merge(v, begin, mid, end);
}

int main() {
    int v[] = {5,3,4,1,2};
    auto n = sizeof(v) / sizeof(v[0]);

    for (auto i : v)
    {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;

    mergeSort(v, 0, n - 1);

    for (auto i : v)
    {
        std::cout<<i<<" ";
    }
}