#include <iostream>
#include <random>

void fill(int* a, int n) {
    int mode;
    std::cout << "1 - manual, 2 - random: ";
    std::cin >> mode;

    if (mode == 1) {
        std::cout << "Enter " << n * n << " elements:\n";
        for (int i = 0; i < n * n; i++) std::cin >> a[i];
    } else {
        int lo, hi;
        std::cout << "Enter range (a b): ";
        std::cin >> lo >> hi;
        if (lo > hi) std::swap(lo, hi);

        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> dist(lo, hi);

        for (int i = 0; i < n * n; i++) a[i] = dist(gen);
    }
}

void print(const int* a, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) std::cout << a[i * n + j] << ' ';
        std::cout << '\n';
    }
}

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    if (n < 1) return 1;

    int* a = new int[n * n];

    fill(a, n);

    std::cout << "\nOriginal matrix:\n";
    print(a, n);

    int changed = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            if (a[i * n + j] != a[j * n + i]) {
                a[i * n + j] = a[j * n + i];
                changed++;
            }

    std::cout << "\nModified matrix:\n";
    print(a, n);
    std::cout << "Changed elements: " << changed << '\n';

    delete[] a;
    return 0;
}