#include <iostream>

int main() {
    int t,n,m,a,d,count;

    std::cin>>t;

    while(t>0) {
        count = 0;
        std::cin>>n>>m>>a>>d;
        for(int i = n; i<=m; i++){
            if(i %a == 0 || i%(a+d) == 0 || i%(a+2*d) == 0 || i%(a+3*d) == 0 || i%(a+4*d) == 0){
                count++;
            }
        }
        t--;
        std::cout<<m-n+1-count<<std::endl;
    }
}