#include<iostream>
#include<vector>

void print_vector(std::vector<int> arr);
std::vector<int> insertion_sort(std::vector<int> arr);

class A_Gravity_Flip {
    public:
        std::vector<int> arr;

        A_Gravity_Flip(std::vector<int> in) {
            arr=in;
        }

        void insertion_sort() {
            int temp;
            for (int i = 0; i < arr.size()-1; i++)
            {
                for (int j = i+1; j < arr.size(); j++)
                {
                    temp = arr[j];
                    if (arr[j] < arr [i]) {
                        arr[j] = arr[i];
                        arr[i] = temp;
                    }
                }
                
            }
        }

        void print_vector() {
            for (int i = 0; i < arr.size(); i++)
            {
                std::cout<<arr[i];
                if(i!=arr.size()-1) {
                    std::cout<<" ";
                }
            }
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

    A_Gravity_Flip obj(arr);
    obj.insertion_sort();
    obj.print_vector();
}