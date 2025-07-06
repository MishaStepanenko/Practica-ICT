#include <stdio.h>

int count_valid_numbers(int p) {
    int dp[31][2][3] = {0};
    dp[1][0][1] = 1;
    dp[1][1][1] = 1;

    for (int i = 2; i <= p; i++) {
        for (int last = 0; last < 2; last++) {
            for (int count = 1; count <= 2; count++) {
                int curr = dp[i - 1][last][count];
                if (curr == 0) continue;
                if (count < 2)
                    dp[i][last][count + 1] += curr;
                int new_last = 1 - last;
                dp[i][new_last][1] += curr;
            }
        }
    }

    return dp[p][0][1] + dp[p][0][2] + dp[p][1][1] + dp[p][1][2];
}

int main() {
    int p;
    scanf("%d", &p);
    printf("%d\n", count_valid_numbers(p));
    return 0;
}
