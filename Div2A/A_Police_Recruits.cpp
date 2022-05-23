#include<iostream>
#include<vector>

int main() {
    int n, a, crimes(0), recruit(0);
    std::vector<int> arr;
    std::cin>>n;

    while(n>0){
        std::cin>>a;
        arr.push_back(a);
        n--;
    }
//2
    for (int e: arr)
    {
        if (recruit > 0)
        {
            if (e<0) {
                if (recruit + e <= 0)
                {
                    crimes += (recruit + e);
                    recruit=0;
                } else {
                    recruit+=e;
                }
            } else {
                recruit += e;
            }
        } else {
            if (e<0) {
                crimes += e;
            } else {
                recruit += e;
            }
        }
        
    }
    std::cout<<std::abs(crimes);
}