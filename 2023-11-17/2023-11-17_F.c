#include <stdio.h>

int main()
{
    int a;
    unsigned int b;
    scanf("%d%u", &a, &b);

    unsigned int x = b;
    int count = __builtin_popcount(b); // 计算b中1的个数

    while (count != a)
    {
        if (a > count)
        {
            // 找到x中第一个为0的位，将其变为1
            x |= (1 << (__builtin_ctz(~x)));
            count++;
        }
        else if (a < count)
        {
            // 找到x中第一个为1的位，将其变为0
            x &= ~(1 << (__builtin_ctz(x)));
            count--;
        }
    }
    printf("%u\n", x);

    return 0;
}