#include <stdio.h>

// 打印unsigned int类型数的二进制表示
void printBinary(unsigned int num)
{
    int bit[32];
    for (int i = 31; i >= 0; i--)
    {
        bit[i] = (num >> i) & 1;
        printf("%d", bit[i]);
    }
    printf("\n");
}

int main()
{
    unsigned int a, b, c, d, e;
    scanf("%u%u", &a, &b);
    c = a & b;
    d = a ^ b;
    e = (c << 1) + d;

    // 输出结果
    printBinary(a);
    printBinary(b);
    printBinary(c);
    printBinary(d);
    printBinary(e);
    printf("%u", e);

    return 0;
}
