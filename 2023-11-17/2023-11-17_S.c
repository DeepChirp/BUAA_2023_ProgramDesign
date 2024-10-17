#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ascending(const void *a, const void *b)
{
    if (*(int *)a > *(int *)b)
    {
        return 1;
    }
    else if (*(int *)a < *(int *)b)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // 指定循环次数
    int n;
    scanf("%d", &n);
    int a[n];
    memset(a, 0, sizeof(a));

    while (n--)
    {
        scanf("%d", &a[n]);
    }

    qsort(a, sizeof(a) / sizeof(int), sizeof(int), ascending);

    for (int i = 0; i < (int)(sizeof(a) / sizeof(int)); i++)
    {
        if (a[i] != a[i + 1] && i != (int)(sizeof(a) / sizeof(int)) - 1)
        {
            printf("%d ", a[i]);
        }
        else if (i == (int)(sizeof(a) / sizeof(int)) - 1)
        {
            printf("%d", a[i]);
        }
    }

    return 0;
}
