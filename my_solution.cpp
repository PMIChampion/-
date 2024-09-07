#include "my_solution.h"


bool isVowel(char ch) {
    return ch == 'e' || ch == 'y' || ch == 'u' || ch == 'i' || ch == 'o' || ch == 'a' ||
    ch == 'E' || ch == 'Y' || ch == 'U' || ch == 'I' || ch == 'O' || ch == 'A';
}


int countVowels(const std::string &input_str){
    int cnt = 0;
    int len_string = input_str.length();
    for (int i = 0; i < len_string; ++i){
        if (isVowel(input_str[i])){
            cnt += 1;
        }
    }
    return cnt;
}