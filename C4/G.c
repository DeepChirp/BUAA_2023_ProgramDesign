#include <stdio.h>

// 求最大公因数
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int a, b, c, d;
    int op; // op分别为 1, 2, 3, 4 时，分别表示将两分数相加、相减、相乘、相除
    while (scanf("%d/%d %d/%d %d", &a, &b, &c, &d, &op) != EOF)
    {
        long long int p, q;
        if (op == 1) // 加法
        {
            p = a * d + b * c;
            q = b * d;
        }
        else if (op == 2) // 减法
        {
            p = a * d - b * c;
            q = b * d;
        }
        else if (op == 3) // 乘法
        {
            p = a * c;
            q = b * d;
        }
        else if (op == 4) // 除法
        {
            p = a * d;
            q = b * c;
        }

        int factor = gcd(p, q);
        p /= factor;
        q /= factor;

        if (q < 0)
        {
            q = -q;
            p = -p;
        }

        if (p == 0)
        {
            printf("0\n");
        }
        else if (q == 1)
        {
            printf("%lld\n", p);
        }
        else
        {
            printf("%lld/%lld\n", p, q);
        }
    }

    return 0;
}
