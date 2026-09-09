//5. Напечатать первые $n$ чисел Фибоначчи. Число $n$ вводится с клавиатуры. 
//Числа Фибоначчи вычисляются по формуле: $F_n = F_{n−1} + F_{n−2}$, где $F_0 = 0, F_1 = 1$.
//0 1 1 2 3 5
#include <iostream>

int main() {
    std::cout << "Введите N" << std::endl;

    int N;
    std::cin >> N;

    std::cout << "Ваша последовательность: " << std::endl;

    int last_n = 0;
    int current_n = 1;

    if (N > 0) std::cout << 0 << std::endl;
    else return 0;
    if (N > 1) std::cout << 1 << std::endl;
    else return 0;
    for (int i = 3; i <= N; i++) {
        int ni = current_n + last_n;

        std::cout << ni << std::endl;

        last_n = current_n;
        current_n = ni;
    }

    return 0;
}
