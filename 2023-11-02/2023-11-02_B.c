#include <stdio.h>

int main()
{
    int m, n, s;
    int a[41][41];
    int b[41][41];
    scanf("%d%d%d", &m, &n, &s);

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if (s == 1)
    {
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("%lld ", (long long int)a[i][j] + b[i][j]);
            }
            printf("\n");
        }
    }
    else if (s == 2)
    {
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("%lld ", (long long int)a[i][j] - b[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
