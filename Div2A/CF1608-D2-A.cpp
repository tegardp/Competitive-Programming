#include <sstream>
#include <string>
#include <vector>
#include <iterator>
#include <iostream>
int main() {
    int t,x;
    std::vector <int> n;
    std::cin>>t;

    while(t>0) {
        std::cin>>x; 
        n.push_back(x);
        t--;
    }

    
    for (int i = 0; i < size(n); i++)
    {
        if(n[i] == 1) {
            std::cout<<1<<"\n";
        } else {
            std::vector<int> data;
            for (int j = 2; j <= n[i]+1; j++)
            {
                data.push_back(j);
            }
            std::ostringstream oss;
            std::copy(data.begin(), data.end(), std::ostream_iterator<int>(oss, " "));

            std::string result( oss.str() );
            std::cout << result << "\n";
        }
    }
    
}