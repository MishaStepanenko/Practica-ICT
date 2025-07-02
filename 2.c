#include <stdio.h>

// Функция для нахождения НОД двух чисел (алгоритм Евклида)
int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// Функция для нахождения НОК двух чисел
int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int p;
    scanf("%d", &p);
    int arr[20];
    for (int i = 0; i < p; i++) {
        scanf("%d", &arr[i]);
    }

    int res = arr[0];
    for (int i = 1; i < p; i++) {
        res = lcm(res, arr[i]);
    }

    printf("%d\n", res);
    return 0;
}
