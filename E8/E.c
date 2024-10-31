#include <stdio.h>
long long MAX(long long b, long long c, long long d, long long e, long long f, long long g);
long long a[1005][1005];
int main()
{
    int m, n;
    int i, j;
    long long b, c, d, e, f, g, bmax, cmax, dmax, emax, fmax, gmax, max;
    bmax = cmax = dmax = emax = fmax = gmax = max = 0;
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%lld", &a[i][j]);
        }
    }
    for (i = 0; i <= m - 3; i++)
    {
        for (j = 0; j <= n - 3; j++)
        {
            b = a[i][j] + a[i + 1][j] + a[i + 2][j + 1] + a[i][j + 2] + a[i + 1][j + 2];
            c = a[i][j + 1] + a[i + 1][j + 1] + a[i + 2][j + 1];
            d = a[i][j] + a[i][j + 1] + a[i][j + 2] + a[i + 1][j] + a[i + 1][j + 2] + a[i + 2][j] + a[i + 2][j + 1] + a[i + 2][j + 2];
            e = a[i][j] + a[i + 1][j] + a[i + 2][j] + a[i + 2][j + 1] + a[i + 2][j + 2];
            f = a[i][j] + a[i][j + 1] + a[i][j + 2] + a[i + 1][j] + a[i + 1][j + 2] + a[i + 2][j] + a[i + 2][j + 1] + a[i + 2][j + 2] + a[i + 1][j + 1];
            g = a[i][j] + a[i][j + 1] + a[i][j + 2] + a[i + 1][j + 1] + a[i + 2][j + 1];
            if (b >= bmax)
            {
                bmax = b;
            }
            if (c >= cmax)
            {
                cmax = c;
            }
            if (d >= dmax)
            {
                dmax = d;
            }
            if (e >= emax)
            {
                emax = e;
            }
            if (f >= fmax)
            {
                fmax = f;
            }
            if (g >= gmax)
            {
                gmax = g;
            }
        }
    }
    max = MAX(bmax, cmax, dmax, emax, fmax, gmax);
    printf("%lld\n", max);
    if (max == bmax)
    {
        printf("V");
    }
    if (max == cmax)
    {
        printf("I");
    }
    if (max == dmax)
    {
        printf("O");
    }
    if (max == emax)
    {
        printf("L");
    }
    if (max == fmax)
    {
        printf("E");
    }
    if (max == gmax)
    {
        printf("T");
    }
    return 0;
}
long long MAX(long long b, long long c, long long d, long long e, long long f, long long g)
{
    long long max = 0;
    if (b >= max)
    {
        max = b;
    }
    if (c >= max)
    {
        max = c;
    }
    if (d >= max)
    {
        max = d;
    }
    if (e >= max)
    {
        max = e;
    }
    if (f >= max)
    {
        max = f;
    }
    if (g >= max)
    {
        max = g;
    }
    return max;
}