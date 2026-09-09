//1. Даны два натуральных числа $n, m$ (вводятся с клавиатуры). Вывести все их общие делители.
#include <iostream>

int main() {
    int n, m;
    std::cout << "Введите число 1: " << std::endl;
    std::cin >> n;
    std::cout << "Введите число 2: " << std::endl;
    std::cin >> m;
    
    std::cout << "Общие делители: " << std::endl;
    int min = std::min(n, m);
    for (int i = 1; i <= min; i++) {
        if ((n % i == 0) && (m % i == 0)) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
