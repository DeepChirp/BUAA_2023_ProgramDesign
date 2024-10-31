#include <stdio.h>

// 判断是否为2的整数次幂
int isIntegerPower(int n)
{
    while (n % 2 == 0)
    {
        n /= 2;
    }
    return n == 1 ? 1 : 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    if (n == 1)
    {
        printf("1\n");
    }
    else
    {
        printf("10");
        for (int i = 3; i <= n; i += 2)
        {
            if (isIntegerPower(n))
            {
                printf("01");
            }
            else if (n % 2 == 0)
            {
                if (i != n - 1)
                {
                    printf("10");
                }
                else
                {
                    printf("01");
                }
            }
            else
            {
                if (i != n)
                {
                    printf("10");
                }
                else
                {
                    printf("1");
                }
            }
        }
    }

    return 0;
}
