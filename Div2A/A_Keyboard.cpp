#include <bits/stdc++.h>

int main() {
    char shift;
    std::string str;
    std::string qwerty = "qwertyuiop[asdfghjkl;zxcvbnm,./";

    std::cin>>shift>>str;
    if (shift == 'R')
    {
        for (int i = 0; i < str.length(); i++)
        {
            std::cout<<qwerty[qwerty.find(str[i])-1];
        }
    } else if (shift == 'L') {
        for (int i = 0; i < str.length(); i++)
        {
            std::cout<<qwerty[qwerty.find(str[i])+1];
        }
    }
}