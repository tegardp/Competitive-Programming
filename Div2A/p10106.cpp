#include <bits/stdc++.h>

int main() {
    int x;
    long long first,second, result;

    std::stack<int> lines;
    while(true){
        std::cin>>x;
        if(lines.size() < 2) {
            lines.push(x);
        } 
        if(lines.size() == 2) {
            first = lines.top();
            lines.pop();
            second = lines.top();
            lines.pop();
            result = first*second;
            std::cout<<result<<"\n";
        }
    }
}