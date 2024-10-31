#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int dp[25][25] = {0};
        dp[1][1] = 1;
        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                for (int k = 1; k <= i - 1; k++)
                {
                    if (j - k >= 2 || k - j >= 2)
                    {
                        dp[i][j] += dp[i - 1][k];
                    }
                }
            }
        }

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ans += dp[n][i];
        }

        printf("%d\n", ans);
    }

    return 0;
}