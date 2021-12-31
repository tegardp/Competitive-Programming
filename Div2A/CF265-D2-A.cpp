#include <iostream>

int main() {
    int pos(0);
    std::string s;
    std::string t;

    std::cin>>s>>t;

    for (int i = 0; i < t.size(); i++)
    {
        if(t[i] == s[pos])
            pos++;
    }
    
    std::cout<<pos+1;
}