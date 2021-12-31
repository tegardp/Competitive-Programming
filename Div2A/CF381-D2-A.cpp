#include <iostream>
#include <vector>

int main() {
    int n,x, sereja(0), dima(0), highest;
    bool sereja_turn = true;
    std::cin>>n;
    std::vector<int> arr;

    for (int i=0; i<n; i++) {
        std::cin>>x;
        arr.push_back(x);
    }
    int arr_size = arr.size();

    while(arr_size>0) {
        if(arr[0] >= arr[arr_size-1]) {
            highest = arr[0];
            arr.erase(arr.begin()+0);
        } else {
            highest = arr[arr_size-1];
            arr.erase(arr.begin()+(arr_size-1));
        }

        if(sereja_turn) {
            sereja += highest;
            sereja_turn = false;
        }
        else {
            dima += highest;
            sereja_turn = true;
        }
        arr_size = arr.size();
    }
    std::cout<<"\n"<<sereja<<" "<<dima;
}
