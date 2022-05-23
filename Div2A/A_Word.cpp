#include<iostream>
#include<algorithm>
#include<string>

class A_Word {
    public:
        std::string str;

        A_Word(std::string s) {
            str = s;
        }

        bool isUpper(char c) {
            if((int) c >= 65 && (int) c <= 90) {
                return true;
            }
            return false;
        }

        int countUpper(std::string s) {
            int count(0);
            for (int i = 0; i < s.length(); i++)
            {
                if(isUpper(s[i])) {
                    count++;
                }
            }
            return count;
        }

        void printResult() {
            if(countUpper(str) > str.length()-countUpper(str)) {
                std::transform(str.begin(), str.end(), str.begin(), ::toupper);
            } else {
                std::transform(str.begin(), str.end(), str.begin(), ::tolower);
            }
            std::cout<<str;
        }
};

int main() {
    std::string str;
    std::cin>>str;

    A_Word obj(str);
    obj.printResult();
}