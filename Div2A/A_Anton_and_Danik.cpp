#include <iostream>

int main() {
    int n, countD, i(0), countA(0);
    std::string s;
    std::cin>>n>>s;

    for (; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            countA++;
        }
        
    }

    countD = n - countA;
    if (countA < countD)
    {
        std::cout<<"Danik";
    }
    else if (countA > countD)
    {
        std::cout<<"Anton";
    }
    else
    {
        std::cout<<"Friendship";
    }
}