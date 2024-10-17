#include <stdio.h>

long long f(long long a, long long b, long long x)
{
    return ((((a % b) * (x % b) * (x % b)) % b + (x % b)) % b + b) % b;
}

int main()
{
    static long long a, b;
    long long x;
    scanf("%lld%lld", &a, &b);
    while (scanf("%lld", &x) != EOF)
    {
        printf("%lld\n", f(a, b, f(a, b, f(a, b, x))));
    }

    return 0;
}
