    #include <bits/stdc++.h>

    int main() {
        int count(1);
        std::string str;
        std::getline(std::cin, str);
        str.erase(std::remove_if(str.begin(), str.end(), [](char c) { return !std::isalnum(c); }), str.end());
        std::sort(str.begin(),str.end());
        if(str.length() == 0) {
            std::cout<<0;
        } else if (str.length() == 1) {
            std::cout<<1;
        } else {
        for (int i = 0; i < str.length() - 1; i++)
        {
            if (str[i+1] != str[i])
            {
                count++;
            }
        }    
        std::cout<<count;
        }
    }