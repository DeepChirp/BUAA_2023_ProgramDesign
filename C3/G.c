#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int *soldiers = (int *)malloc(n * sizeof(int)); // 士兵状态，0表示G士兵，1表示D士兵

    for (int i = 0; i < n; i++)
    {
        soldiers[i] = 0; // 初始都是G士兵
    }

    for (int i = 0; i < m; i++)
    {
        int command;
        scanf("%d", &command);

        if (command == 1)
        {
            // 命令1，将士兵状态取反
            for (int j = 0; j < n; j++)
            {
                soldiers[j] = 1 - soldiers[j];
            }
        }
        else if (command == 2)
        {
            int lowestG = -1; // 最低位的G士兵的编号
            for (int j = 0; j < n; j++)
            {
                if (soldiers[j] == 0)
                {
                    lowestG = j;
                    break;
                }
            }

            if (lowestG != -1)
            {
                soldiers[lowestG] = 1; // 将最低位的G士兵变为D士兵
            }
        }
    }

    int *dSoldiers = (int *)malloc(n * sizeof(int)); // 存储D士兵的编号
    int dCount = 0;                                  // D士兵的数量

    for (int i = 0; i < n; i++)
    {
        if (soldiers[i] == 1)
        {
            dSoldiers[dCount] = i + 1; // 士兵编号从1开始
            dCount++;
        }
    }

    for (int i = 0; i < dCount; i++)
    {
        printf("%d ", dSoldiers[i]);
    }
    printf("\n");

    printf("%d\n", dCount);

    free(soldiers);
    free(dSoldiers);

    return 0;
}