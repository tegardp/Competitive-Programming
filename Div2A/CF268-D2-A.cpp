#include <iostream>
#include <vector>
int main() {
    int n, x, y, count(0);
    std::vector <int> vector_x;
    std::vector <int> vector_y;

    do {
        std::cin>>n;
        if (n >= 2 && n<= 30)
            break;
        std::cout<<"Please in put n between 2 and 30 inclusive";
    } while(true);

    for (int i = 0; i < n; i++)
    {
        std::cin>>x>>y;
        vector_x.push_back(x);
        vector_y.push_back(y);
    }
    
    int size_x = size(vector_x);
    int size_y = size(vector_y);

    for (int i = 0; i < size_x; i++) {
        for (int j = 0; j<size_y; j++ ) {
            if (vector_x[i] == vector_y[j]) {
                count++;
            }
        }
    }
    std::cout<<count;
}