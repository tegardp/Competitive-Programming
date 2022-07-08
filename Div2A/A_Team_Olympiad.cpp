#include<bits/stdc++.h>

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

int main() {
    int n, count_1(0), count_2(0), count_3(0);
    std::vector<int> v;
    std::vector<std::vector<int>> v2;
    std::cin>>n;
    while(n) {
        int x;
        std::cin>>x;
        if (x == 1) count_1++;
        if (x == 2) count_2++;
        if (x == 3) count_3++;
        v.push_back(x);
        n--;
    }

    int min_team_comp = std::min({count_1, count_2, count_3});

    if (min_team_comp == 0) {
        std::cout<<0;
        return 0;
    }

    std::cout<<min_team_comp<<std::endl;    
    for (int i = 0; i < min_team_comp; i++) {
        int student_1, student_2, student_3;

        student_1 = getIndex(v, 1);
        v[student_1] = 0;
        student_2 = getIndex(v, 2);
        v[student_2] = 0;
        student_3 = getIndex(v, 3);
        v[student_3] = 0;
        std::cout<<student_1+1<<" "<<student_2+1<<" "<<student_3+1<<std::endl;
    }
}