#include <iostream>
#include <vector>

int main() {
    int a, count(0);
    std::string s;
    std::vector <int> arr;

    for (int i = 0; i < 4; i++)
    {
        std::cin>>a;
        arr.push_back(a);
    }
    
    std::cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        count += arr[((int) s[i] - 48) - 1];
    }

    std::cout<<count;
}