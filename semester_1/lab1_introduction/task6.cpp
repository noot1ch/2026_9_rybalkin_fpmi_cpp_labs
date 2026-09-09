//6. Дана арифметическая прогрессия: $a_k= a_{k−1} + d$. Вывести все члены этой прогрессии, 
//кратные 3, которые лежат на отрезке $[a, b]$. Числа $a, b, d$ вводятся с клавиатуры($a_0 = a$).
#include <iostream>

int main() {
    int a, b, d;

    std::cout << "Введите a, b, d через пробел или другой разделительный знак" << std::endl;
    std::cin >> a >> b >> d;

    if (a < 0 || b < 0 || d < 0) {
        std::cout << "Все числа должны быть > 0" << std::endl;
        return 1;
    }

    std::cout << "Последовательность: " << std::endl;

    for (int current = a; current <= b; current += d) {
        if (current % 3 == 0) {
            std::cout << current <<std::endl;
        }
    }
}
