#include <stdio.h>
void f(int num, int array[], int n)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = num;
        // 判断是否为整数倍
        if (array[i] != 0)
        {
            if (temp % array[i] == 0)
            {
                printf("%d", i + 1);
                flag = 1;
                continue;
            }
        }

        // 判断十进制数中是否有该数
        while (temp)
        {
            if (array[i] == temp % 10)
            {
                printf("%d", i + 1);
                flag = 1;
                break;
            }
            temp /= 10;
        }
    }
    if (!flag)
    {
        printf("count out");
    }
    putchar('\n');
}

int main()
{
    int n, m;
    int count[11];
    scanf("%d%d", &n, &m);

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &count[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        f(i, count, m);
    }

    return 0;
}
