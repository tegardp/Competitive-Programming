#include <bits/stdc++.h>

using namespace std;
int main() {
    int n,input,m,x,y;

    cin>>n;

    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>input;
        a[i] = input;
    }
    
    cin>>m;

    for (int i = 0; i < m; i++)
    {
        int left(0), right(0);
        cin>>x>>y;
        x--;
        for (int j = 1; j <= a[x]; j++)
        {
            if(j<y)
                left++;
            else if(j>y)
                right++;            
        }
        if (x == 0){
            a[x] = 0;
            if(sizeof(a)/sizeof(*a)>1)
                a[x+1] += right;
        } else if (x+1 == n){
            a[x-1] += left;
            a[x] = 0;
        } else {
            a[x-1] += left;
            a[x+1] += right;
            a[x] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\n";
    }
    
}