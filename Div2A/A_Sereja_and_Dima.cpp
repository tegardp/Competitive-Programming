#include<iostream>
#include<vector>

class A_Sereja_and_Dima {
    public:
        std::vector<int> arr;

        A_Sereja_and_Dima(std::vector<int> v) {
            arr = v;
        }

        void main() {
            int countS(0), countD(0), length = arr.size();

            for (int i = 0; i < length; i++)
            {
                if (i % 2 == 0)
                {
                    if(arr.front() > arr.back()) {
                        countS += arr.front();
                        arr.erase(arr.begin());
                    } else
                    {
                        countS += arr.back();
                        arr.pop_back();
                    }
                }
                else
                {
                    if(arr.front() > arr.back()) {
                        countD += arr.front();
                        arr.erase(arr.begin());
                    } else
                    {
                        countD += arr.back();
                        arr.pop_back();
                    }
                }    
            }
            
            std::cout<<countS<<" "<<countD;
        }
};

int main() {
    int n, a;
    std::vector<int> arr;
    std::cin>>n;

    while(n>0) {
        std::cin>>a;
        arr.push_back(a);
        n--;
    }

    A_Sereja_and_Dima obj(arr);
    obj.main();
}