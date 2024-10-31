#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 2 - i; j++)
        {
            putchar(' ');
        }
        putchar('/');
        for (int j = 0; j < i; j++)
        {
            putchar(' ');
        }
        putchar('|');
        putchar('|');

        for (int j = 0; j < i; j++)
        {
            putchar(' ');
        }
        putchar('\\');
        for (int j = 0; j < n - 2 - i; j++)
        {
            putchar(' ');
        }
        for (int j = 0; j < n - 2 - i; j++)
        {
            putchar(' ');
        }
        putchar('/');
        for (int j = 0; j < i; j++)
        {
            putchar(' ');
        }
        putchar('|');
        putchar('|');

        for (int j = 0; j < i; j++)
        {
            putchar(' ');
        }
        putchar('\\');
        for (int j = 0; j < n - 2 - i; j++)
        {
            putchar(' ');
        }
        putchar('\n');
    }
    for (int i = 0; i < n - 1; i++)
    {
        putchar('-');
    }
    putchar('|');
    putchar('|');
    for (int i = 0; i < 2 * (n - 1); i++)
    {
        putchar('-');
    }
    putchar('|');
    putchar('|');
    for (int i = 0; i < n - 1; i++)
    {
        putchar('-');
    }

    return 0;
}
