#include <bits/stdc++.h>

int main() {
    int n,m, c, count(0);
    while(true) {
        std::cin>>n>>m>>c;

        for (int i = 1; i <= n-7; i++)
        {
            for (int j=1; j<=m-7; j++) {
                if (c) {
                    if(i%2!=0 && j%2!=0) {
                    count++;
                    } else if(i%2==0 && j%2==0) {
                        count++;
                    }
                } else {
                    if(i%2!=0 && j%2==0) {
                        count++;
                    } else if(i%2==0 && j%2 !=0) {
                        count++;
                    }
                }
            }
        }
     std::cout<<count<<std::endl;
    }
}