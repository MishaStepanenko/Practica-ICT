#include <stdio.h>
#include <string.h>

unsigned long long factorial(int n) {
    unsigned long long res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main() {
    char word[15];
    int freq[256] = {0};

    scanf("%14s", word);
    int len = strlen(word);

    for (int i = 0; i < len; i++) {
        freq[(unsigned char)word[i]]++;
    }

    unsigned long long numerator = factorial(len);
    unsigned long long denominator = 1;

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 1) {
            denominator *= factorial(freq[i]);
        }
    }

    printf("%llu\n", numerator / denominator);

    return 0;
}
