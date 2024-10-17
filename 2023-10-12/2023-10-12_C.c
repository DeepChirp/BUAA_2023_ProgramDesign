#include <stdio.h>

int main()
{
    // 指定循环次数
    int n;
    scanf("%d", &n);

    int r[n];
    int score[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
    }

    // 处理边界情况
    r[0] = 1;
    printf("A ");

    for (int i = 1; i < n; i++)
    {
        if (score[i] == score[i - 1])
        {
            r[i] = r[i - 1];
        }
        else
        {
            r[i] = i + 1;
        }

        if (r[i] <= 0.1 * n)
        {
            printf("A ");
        }
        else if (r[i] <= 0.25 * n)
        {
            printf("B ");
        }
        else if (r[i] <= 0.6 * n)
        {
            printf("C ");
        }
        else if (r[i] <= 0.9 * n)
        {
            printf("D ");
        }
        else
        {
            printf("E ");
        }
    }

    return 0;
}
