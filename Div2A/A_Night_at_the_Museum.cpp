#include<iostream>
#include<string>

class A_Night_at_the_Museum {
    public:
        std::string str;

        A_Night_at_the_Museum(std::string s) {
            str = s.insert(0,1,'a');
        }

        int countLeastMove(char a, char b) {
            int mid = 13;
            int move = abs((int) a - (int) b);

            if(move < 13) {
                return move;
            } else {
                return 26 - move;
            }
        }

        void main() {
            int count(0);

            for (int i = 0; i < str.length()-1; i++)
            {
                count+= countLeastMove(str[i], str[i+1]);
            }
            
            std::cout<<count;
        }
};

int main() {
    std::string str;
    std::cin>>str;

    A_Night_at_the_Museum obj(str);
    obj.main();
}