#include<bits/stdc++.h>

int main() {
    int n,distress(0);
    long long x,d;
    std::queue<char> operand;
    std::queue<long long> pack;
    char op;
    std::cin>>n>>x;
    for (int i = 0; i < n; i++)
    {
        std::cin>>op>>d;
        operand.push(op);
        pack.push(d);
    }
    for (int i = 0; i < n; i++)
    {
        if (operand.front() == '+')
        {
            x += pack.front();
            operand.pop();
            pack.pop();
        } else
        {
            if (x >= pack.front())
            {
                x -= pack.front();
                operand.pop();
                pack.pop();
            } else {
                distress++;
                operand.pop();
                pack.pop();
            }
        }
    }

    std::cout<<x<<" "<<distress;
}