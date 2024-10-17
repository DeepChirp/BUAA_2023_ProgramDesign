#include <stdio.h>

int f(long long int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n % 3 == 0)
    {
        return (f(n / 3) + 1);
    }
    else
    {
        return (f(n - 1) + 1);
    }
}

int main()
{
    // 指定循环次数
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int l, r;
        long long int max = 0;
        scanf("%lld%lld", &l, &r);
        for (long long int i = l; i <= r; i++)
        {
            max = f(i) > max ? f(i) : max;
        }
        printf("%lld\n", max);
    }

    return 0;
}
