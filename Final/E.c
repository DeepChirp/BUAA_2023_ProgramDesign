#include <stdio.h>

unsigned int f(unsigned int a, unsigned int b)
{
    unsigned int result = 0;
    int temp = 1;
    while (a || b)
    {
        result += temp * ((a % 4 + b % 4) % 4);
        a = (a - a % 4) / 4;
        b = (b - b % 4) / 4;
        temp *= 4;
    }
    return result;
}

int main()
{
    // 指定循环次数
    int n;
    unsigned int a;
    unsigned int result;
    scanf("%d", &n);
    scanf("%u", &result);
    n -= 1;

    while (n--)
    {
        scanf("%u", &a);
        result = f(result, a);
    }
    printf("%u", result);

    return 0;
}
