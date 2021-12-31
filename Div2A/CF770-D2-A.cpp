#include <bits/stdc++.h>

int main() {
    int n,k;
    char cch;
    std::cin>>n>>k;
    std::queue<char> pass;
    std::vector<char> got;

    while (k > 0) {
        do {
            cch = 'a' + rand()%26;
        } while ((std::find(got.begin(), got.end(),cch)!=got.end()));
        pass.push(cch);
        got.push_back(cch);
        k--;
    }
    while (pass.size()<n)
    {
        for (int i = 0; i < got.size(); i++)
        {
            if(pass.size()<n){
                pass.push(got[i]);
            }
            else
                break;
        }
        
    }
    while(!pass.empty()){
        std::cout<<pass.front();
        pass.pop();
    }
    
}