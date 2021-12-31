#include <bits/stdc++.h>

int getIndex(std::vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);
    if (it != v.end())
    {
        int index = it - v.begin();
        return index;
    }
    else {
        return -1;
    }
}

bool comp(int a, int b)
{
    return (a < b);
}

int main() {
    int n, ti, count_1(0), count_2(0), count_3(0), count_team(0);
    std::vector<int> t;
    std::cin>>n;

    for (int i = 0; i < n; i++)
    {
        std::cin>>ti;
        t.push_back(ti);
        if (ti == 1)
            count_1++;
        else if(ti == 2)
            count_2++;
        else if (ti == 3)
            count_3++;
    }
    int min_count_team = std::min({count_1, count_2, count_3}, comp);
    for (int i = 1; i <= min_count_team+1; i++)
    {
        if (count_1 == 0 || count_2==0 || count_3==0)
        {
            std::cout<<count_team<<"\n";
            if (count_team == 0)
                return 0;
            break;
        } else {
            count_1--;
            count_2--;
            count_3--;
            count_team++;
        }
    }

    for (int i = 0; i < count_team; i++)
    {
        int student_1 = getIndex(t,1);
        t[student_1] = 0;
        int student_2 = getIndex(t,2);
        t[student_2] = 0;
        int student_3 = getIndex(t,3);
        t[student_3] = 0;
        std::cout<<student_1+1<<" "<<student_2+1<<" "<<student_3+1<<"\n";
    }
    
}