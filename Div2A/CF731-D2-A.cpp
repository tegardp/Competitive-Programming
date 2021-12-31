#include <iostream>
#include <string>

int main() {
    int ascii, turn, moves(0), pos(0);
    std::string str;

    std::cin>>str;
    int str_len = size(str);
    for(int i=0; i<str_len;i++){
        ascii = str[i] - 97;
        turn = abs(pos - ascii);
        if(turn<13) {
            moves += turn;
        } else {
            moves += 26-turn;
        }
        pos = ascii;
    }

    std::cout<<moves;
}