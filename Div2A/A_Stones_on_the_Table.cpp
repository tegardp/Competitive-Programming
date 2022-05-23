#include<iostream>
#include<string>

int main() {
    int n,count(0);
    std::string str;
    std::cin>>n>>str;

    for (int i = 0; i < n-1; i++)
    {
        if (str[i] == str[i+1])
        {
            count++;
        }
        
    }
    std::cout<<count;
}