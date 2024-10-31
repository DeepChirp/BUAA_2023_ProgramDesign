#include <stdio.h>

long long qpow(long long a, unsigned long long b, long long p)
{
    long long ans = 1;
    a = a % p;
    while (b)
    {
        if (b & 1)
            ans = (ans * a) % p;
        b >>= 1;
        a = a * a % p;
    }
    return ans;
}

int main()
{
    long long a, p;
    unsigned long long b;
    scanf("%lld%llu%lld", &a, &b, &p);
    printf("%lld\n", qpow(a, b, p));

    return 0;
}
