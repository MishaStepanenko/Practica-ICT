#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    for (int m = 1; m < n; m++) {
        if (n / m == n % m) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
