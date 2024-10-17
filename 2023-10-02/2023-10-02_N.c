#include <stdio.h>
int main()
{
    int m, n, a, b, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d%d%d", &m, &a, &b);
        int sgn = 0; // 标记有没有符合的情况
        if (b == 0)
        {
            if (m <= a && a <= 4 * m && (a - m) % 3 == 0)
            {
                printf("Yes\n");
                sgn = 1;
                continue;
            }
        }
        if (b == 2 || b == 3 || b == 5 || b == 6)
        {
            if (m - 1 <= a && a <= 4 * (m - 1) && (a - (m - 1)) % 3 == 0)
            {
                printf("Yes\n");
                sgn = 1;
                continue;
            }
        }
        int a_min, b_min;
        if (b % 6 == 0)
            b_min = b / 6;
        else if (b == 4)
            b_min = 2;
        else
            b_min = b / 6 + 1;
        a_min = a / 4 + a % 4;
        int st;
        if ((m - b / 2) >= a_min)
            st = (m - b / 2);
        else
            st = a_min;
        if ((m - b / 2 > a || m - b_min < a_min))
        {
            printf("No\n");
            continue;
        }
        for (int j = st; j <= m - b_min && j <= a && j <= st + 3; j++)
        {
            if ((a - j) % 3 == 0)
            {
                sgn = 1;
                printf("Yes\n");
                break;
            }
        }
        if (sgn == 0)
        {
            printf("No\n");
        }
    }
}