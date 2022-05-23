#include <iostream>

int main()
{
    int n, h, count(0);
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

    std::cout<<count;
}