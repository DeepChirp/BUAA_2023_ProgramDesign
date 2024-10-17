#include <stdio.h>
#include <stdlib.h>

void fun(int n, int first)
{
    int i, a[100];
    for (i = 0; n != 0; i++)
    {
        a[i] = n % 2;
        n /= 2;
    }
    for (--i; i >= 0; i--)
    {
        if (a[i] == 1)
        {
            if (!first)
            {
                printf("+");
            }
            first = 0;
            if (i > 1)
            {
                printf("2(");
                fun(i, 1);
                printf(")");
            }
            if (i == 0)
                printf("2(0)");
            if (i == 1)
                printf("2(2(0))");
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("0");
    }
    else
    {
        fun(n, 1);
    }

    return 0;
}