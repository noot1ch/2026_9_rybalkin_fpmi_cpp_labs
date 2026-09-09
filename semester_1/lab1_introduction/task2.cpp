//2. Вычислить сумму первых $N$ нечётных чисел. Количество чисел $N$ вводится с клавиатуры.
#include <iostream>

int main() {
    int N;
    std::cout << "Введите N: " << std::endl;
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Введите натуральное число" << std::endl;
        return 1;
    }

    int count = N*2;
    std::cout << "Ваши нечетные числа: " << std::endl;
    for (int i = 1; i < count; i += 2) {
        std::cout << i << std::endl;
    }

    return 0;
}
