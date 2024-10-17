#include <stdio.h>

int main()
{
    unsigned long long n;
    unsigned long long b;
    unsigned long long sum = 0;

    scanf("%llu", &n);

    while (scanf("%llu", &b) != EOF && n != 0)
    {
        sum += n % b;
        n /= b;
    }

    sum += n;
    printf("%llu", sum);

    return 0;
}
