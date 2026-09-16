//С клавиатуры вводится натуральное число n. Найти все совершенные числа, не превосходящие n.
//Натуральное число k называется совершенным, если оно равно сумме всех своих делителей за исключением себя самого.
#include <iostream>

bool is_perfect(int n) {
    int mul_sum = 0;

    for (int i = 1; i < n / 2; i++) {
        if (n % i == 0) {
            mul_sum += i;
        }
    }

    return mul_sum == n;
}

int main() {
    int n;
    std::cout << "Введите число:" << std::endl;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        if (is_perfect(i)) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
