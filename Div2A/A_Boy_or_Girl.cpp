#include<iostream>
#include<string>

class A_Boy_or_Girl{
    public:
        std::string str;

        A_Boy_or_Girl(std::string s) {
            str = s;
        }

        void sort() {
            char temp;

            for (int i = 0; i < str.length()-1; i++)
            {
                for (int j = i+1; j < str.length(); j++)
                {
                    temp = str[j];
                    if (str[j] < str[i])
                    {
                        str[j] = str[i];
                        str[i] = temp;
                    }
                }
                
            }
        }

        void unique() {
            std::string temp = "";

            for (int i = 0; i < str.length(); i++)
            {
                if(str[i] != str[i+1]) {
                    temp.push_back(str[i]);
                }
            }
            str = temp;
        }

        void printResult() {
            if (str.length() % 2 == 0)
            {
                std::cout<<"CHAT WITH HER!";
            } else {
                std::cout<<"IGNORE HIM!";
            }
        }

        void main() {
            sort();
            unique();
            printResult();
        }
};

int main() {
    std::string s;
    std::cin>>s;

    A_Boy_or_Girl obj(s);
    obj.main();
}