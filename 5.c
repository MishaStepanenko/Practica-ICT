#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int mod = 12345;
    int a[n+1];
    a[0] = 1;
    a[1] = 2;
    a[2] = 4;
    for (int i = 3; i <= n; i++) {
        a[i] = (a[i-1] + a[i-2] + a[i-3]) % mod;
    }
    printf("%d", a[n]);
    return 0;
}
