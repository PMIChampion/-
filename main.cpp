#include "my_solution.h"
#include <iostream>

int main() {
    std::string input;
    std::cout << "Введите слово: ";
    std::cin >> input;
    std::cout << "Количество гласных: " << countVowels(input) << std::endl;
    return 0;
}