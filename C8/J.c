#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAXN 1000000000
#define MAXK 15
#define INF 1e9
#define min(a, b) ((a) < (b) ? (a) : (b))

double dp[1 << MAXK][MAXK];
int l[MAXK], r[MAXK], len[MAXK], sum[1 << MAXK];

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        for (int i = 0; i < k; i++)
        {
            scanf("%d%d", &l[i], &r[i]);
            len[i] = r[i] - l[i] + 1;
        }
        for (int i = 0; i < (1 << k); i++)
        {
            dp[i][k] = INF;
            sum[i] = 0;
            for (int j = 0; j < k; j++)
            {
                if (i & (1 << j))
                {
                    sum[i] += len[j];
                }
            }
            if (sum[i] >= n)
            {
                dp[i][k] = 0;
            }
        }
        for (int i = k - 1; i >= 0; i--)
        {
            for (int j = 0; j < (1 << k); j++)
            {
                if (j & (1 << i))
                {
                    dp[j][i] = dp[j][i + 1];
                }
                else
                {
                    double p = (double)len[i] / sum[j];
                    dp[j][i] = min(dp[j][i + 1], p * (dp[j | (1 << i)][i + 1] + 1) + (1 - p) * dp[j][i + 1]);
                }
            }
        }
        if (dp[0][0] >= INF)
        {
            printf("-1\n");
        }
        else
        {
            printf("%.4lf\n", dp[0][0]);
        }
    }
    return 0;
}