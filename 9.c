#include <stdio.h>
#include <math.h>

int minimal_steps(int x, int y) {
    long long d = (long long)y - (long long)x;
    if (d == 0) return 0;
    long long n = (long long)(sqrt(2 * d));
    while (n * (n + 1) / 2 < d) n++;
    if (n * (n + 1) / 2 == d) return (int)n;
    else if ((n * (n + 1) / 2 - d) < n) return (int)(n + 1);
    else return (int)(n + 2);
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", minimal_steps(x, y));
    return 0;
}
