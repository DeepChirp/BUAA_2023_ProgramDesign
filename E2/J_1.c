#include <stdio.h>

int main()
{
    int n, m, a, b, i, c = 0;
    int max, min, mod;

    scanf("%d", &n);
    while (n--)
    {
        scanf("%d%d%d", &m, &a, &b);
        mod = a % 4;
        max = a + b / 2;
        if (b == 0)
        {
            for (i = m; i <= 4 * m; i = i + 3)
            {
                if (a == i)
                {
                    c = 1;
                    break;
                }
            }
            if (c == 1)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
        else if (b == 1)
        {
            printf("No\n");
        }
        else if (b == 2 || b == 3)
        {
            for (i = m - 1; i <= 4 * (m - 1); i = i + 3)
            {
                if (a == i)
                {
                    c = 1;
                    break;
                }
            }
            if (c == 1)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
        else if (b == 4)
        {
            for (i = (m - 2); i <= 4 * (m - 2); i = i + 3)
            {
                if (a == i)
                {
                    c = 1;
                    break;
                }
            }
            if (c == 1)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
        else if (b == 5)
        {
            for (i = (m - 2); i <= 4 * (m - 2); i = i + 3)
            {
                if (a == i)
                {
                    c = 1;
                    break;
                }
            }
            for (i = (m - 1); i <= 4 * (m - 1); i = i + 3)
            {
                if (a == i)
                {
                    c = 1;
                    break;
                }
            }
            if (c == 1)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
        else
        {
            if (b % 6 == 0)
            {
                min = a / 4 + mod + b / 6;
            }
            else
            {
                min = a / 4 + mod + b / 6 + 1;
            }

            if (m >= min && m <= max)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
        c = 0;
    }
    return 0;
}