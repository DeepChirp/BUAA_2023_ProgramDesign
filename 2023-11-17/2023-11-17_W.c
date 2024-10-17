#include <stdio.h>
#include <string.h>

#define MAXN 100

long long memo[MAX][MAX];

long long combination(int n, int m)
{
    if (m > n)
    {
        return 0;
    }
    if (memo[n][m] != -1)
    {
        return memo[n][m];
    }
    return memo[n][m] = m == 0 ? 1 : combination(n - 1, m - 1) + combination(n - 1, m);
}

int main()
{
    memset(memo, -1, sizeof(memo));
    int a, b, c, l;
    while (scanf("%d%d%d%d", &a, &b, &c, &l) != EOF)
    {
        int i, j, k;
        long long sum = 0;
        int p = l / a;
        for (i = 0; i <= p; i++)
        {
            for (j = 0; j <= p; j++)
            {
                for (k = 0; k <= p; k++)
                {
                    if (a * i + b * j + c * k == l)
                    {
                        sum += combination(i + j + k, i) * combination(j + k, j);
                    }
                }
            }
        }
        printf("%lld\n", sum);
    }

    return 0;
}