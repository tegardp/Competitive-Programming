#include <bits/stdc++.h>

using namespace std;
int main() {
    long long n,b,d,x,sum(0), count(0);
    cin>>n>>b>>d;

    while(n>0) {
        cin>>x;
        if (x <= b) {
            sum += x;
        }
        if(sum>d){
            sum = 0;
            count++;
        }
        n--;
    }

    cout<<count;
}