#include <bits/stdc++.h>

int main() {
    int y,w, d, nominator, division;
    float prob;
    std::cin>>y>>w;
    
    d = std::max(y,w);

    nominator = 7-d;

    nominator % 6 == 0 ? division = 6 : 
        nominator % 3 == 0 ? division = 3 : 
        nominator % 2 == 0 ? division = 2 : division = 1;

    std::cout<<nominator/division<<"/"<<6/division;
}