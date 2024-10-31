#include <stdio.h>
#define max(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    long long w;
    long long w_max = 0;
    int sum_max = 0;
    int sum_current = 0;
    // 指定循环次数
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int m1, m2, m3, m4;
        int a, b, c, d;
        scanf("%d%d%d%d", &m1, &m2, &m3, &m4);
        int sum = m1 + m2 + m3 + m4;
        sum_max = max2(sum_max, sum);
        if (m1 + m2 >= 0.9 * sum)
        {
            c = 1;
            d = 1;
        }
        else
        {
            if (m3 > m4)
            {
                c = 1;
                d = 2;
            }
            else
            {
                c = 2;
                d = 1;
            }
        }
        a = 2 * (c + d);
        if (m2 <= 0.2 * m1)
        {
            b = 3 + a;
        }
        else
        {
            b = max2(c, d) + a;
        }
        int p = 0;
        if (sum > 1000 && m3 <= 0.5 * sum)
        {
            p += 200;
        }
        if (m1 > 750)
        {
            p += 500;
        }
        w = a * m1 + b * m2 + c * m3 + d * m4 + p;
        if (w > w_max)
        {
            sum_current = sum;
            w_max = w;
        }
        else if (w_max == w)
        {
            sum_current = max2(sum, sum_current);
        }
        printf("%lld\n", w);
    }

    if (sum_current == sum_max)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
