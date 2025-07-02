#include <stdio.h>

int main() {
    int t1, t2, t3;
    printf("Введите три значения: ");
    scanf("%d %d %d", &t1, &t2, &t3);
    double total_rate = 1.0/t1 + 1.0/t2 + 1.0/t3;
    double time_needed = 1.0 / total_rate;
    printf("Час, необходимый для съедания пирога: %.2f годин\n", time_needed);
    return 0;
}
