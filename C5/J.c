#include <stdio.h>
#include <math.h>

long long f(long long n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        long long k = log2(n);
        return f(n / 2) + f(n - pow(2, k));
    }
}

int main()
{
    long long n;
    while (scanf("%lld", &n) != EOF)
    {
        printf("%lld\n", f(n));
    }
    return 0;
}