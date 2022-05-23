#include <iostream>

class A_Vanya_and_Fence
{
public:
    int main(int n, int h)
    {
        int count(0);
        std::cin >> n >> h;
        int a;
        while (n > 0)
        {
            std::cin >> a;
            if (a > h)
                count++;
            count++;
            n--;
        }

        std::cout << count;
    }
};

int main() {
    int n, h;
    std::cin >> n >> h;

}
