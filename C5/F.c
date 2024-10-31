#include <stdio.h>

// 判断素数
int isPrime(int num)
{
    if (num == 1)
        return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int l, r;
    int sum = 0;
    scanf("%d%d", &l, &r);

    for (int i = l; i <= r - 2; i++)
    {
        if (isPrime(i) && isPrime(i + 2))
        {
            printf("%d %d\n", i, i + 2);
            sum++;
        }
    }

    printf("%d\n", sum);

    return 0;
}
