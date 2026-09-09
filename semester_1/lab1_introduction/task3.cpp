//3. С клавиатуры вводится четырёхзначное натуральное число. Выяснить, является ли оно 
//палиндромом (т.е. читается одинаково как слева направо, так и справа налево).
#include <iostream>
#include <string>

int main() {
    std::cout << "Введите число: " << std::endl;

    std::string str;
    std::cin >> str;

    int len = str.length();
    int half = len / 2;
    for (int i = 0; i < half; i++) {
        if (str[i] != str[len-1-i]) {
            std::cout << "не палиндром" << std::endl;
            return 0;
        }
    }

    std::cout << "палиндром" << std::endl;
    return 0;
}
