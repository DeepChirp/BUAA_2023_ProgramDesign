#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d%d", &n, &m);
    if (m > n | m < 0)
    {
        printf("输入错误！");
        return 0;
    }

    int i = 2 * m - n;
    printf("%d\n", i);
    if (i >= 4)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}