#include <stdio.h>
#include <math.h>

int combination(int n, int m)
{
    if (m > n)
    {
        return 0;
    }
    return m == 0 ? 1 : combination(n - 1, m - 1) + combination(n - 1, m);
}

int main()
{
    int a, b, n, k;
    scanf("%d%d%d%d", &a, &b, &n, &k);
    long long result = pow(a, n - k) * pow(b, k) * combination(n, k);
    printf("%lld", result);

    return 0;
}
