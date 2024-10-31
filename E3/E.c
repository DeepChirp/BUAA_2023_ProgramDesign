#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        unsigned int x;
        scanf("%u", &x);

        if (x == 1)
        {
            printf("3\n");
            continue;
        }

        // 判断是否为2的正整数次幂
        if ((x & (x - 1)) == 0)
        {
            printf("%u\n", x + 1);
            continue;
        }

        unsigned int y = 1;

        while ((x & y) == 0 || (x ^ y) == 0)
        {
            y = y << 1; // 左移一位，相当于乘以2
        }
        printf("%u\n", y);
    }

    return 0;
}