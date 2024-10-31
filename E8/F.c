#include <stdio.h>

#define MAXN 15

int dp[MAX][MAX];

int main()
{
    int m, n, t;
    scanf("%d%d%d", &m, &n, &t);
    dp[0][0] = 1;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        dp[x][y] = -1;
    }
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (dp[i][j] == -1)
            {
                dp[i][j] = 0;
            }
            else
            {
                if (i > 0)
                {
                    dp[i][j] += dp[i - 1][j];
                }
                if (j > 0)
                {
                    dp[i][j] += dp[i][j - 1];
                }
            }
        }
    }
    printf("%d\n", dp[m][n]);
    return 0;
}