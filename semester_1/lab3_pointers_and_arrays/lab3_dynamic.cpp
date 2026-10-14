//В одномерном массиве, состоящем из $n$ целых элементов, найти самую длинную цепочку подряд стоящих элементов, которая является _палиндромом_. 
//В такой цепочке первое число равно последнему числу, второе – предпоследнему и т.д.
#include <iostream>
#include <random>

void fill_list (int* list, int length) {
    int mode;
    std::cout << "Enter 1 for manual entry and 2 for random:" << std::endl;
    std::cin >> mode;

    if (mode == 1) {
        for (int i = 0; i < length; i++) {
            std::cin >> list[i];
        }
    } else if (mode == 2) {
        int min, max;
        std::cout << "Enter diaposone per space :" << std::endl;
        std::cin >> min >> max;

        if (min > max) std::swap (min, max);

        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> dist(min, max);

        for (int i = 0; i < length; i++) {
            list[i] = dist(gen);
        }
    } else {
        std::cout << "Invalid mode!!!\n";
    }
}

int get_max_polindrom_length(int* list, int length) {
    for (int temp_length = length; temp_length > 1; temp_length--) {

        bool is_polindrom = true;
        for (int i = 0; i < temp_length / 2; i++) {
            if (list[i] != list[temp_length-1-i]) {
                is_polindrom = false;
                break;
            }
        }

        if (is_polindrom) return temp_length;
    }

    return 1;
}

// solve task with usage of
// static arrays
int main() {
    int length;
    std::cout << "enter array length: " << std::flush;
    std::cin >> length;

    if (length < 0) {
        std::cout << "Invalid length\n";
        return 1;
    }

    int* list = new int[length];

    fill_list(list, length);

    int max_ind = 0;
    int max_length = 0;
    for (int i = 0; i < length; i++) {
        int curr_length = get_max_polindrom_length(&list[i], length - i);

        if (curr_length > max_length) {
            max_length = curr_length;
            max_ind = i;
        }
    }

    std::cout << "max ind: " << max_ind << " max length: " << max_length << std::endl;

    delete[] list;
    return 0;
}