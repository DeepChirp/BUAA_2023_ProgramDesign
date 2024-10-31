#include <stdio.h>
#define MAX 1000000007

// 阶乘运算
long long factorial(int n)
{
    long long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = (result * i) % MAX;
    }

    return result;
}

int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        printf("%lld\n", factorial(factorial(n)));
    }

    return 0;
}
