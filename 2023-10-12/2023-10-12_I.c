#include <stdio.h>
#include <stdlib.h>

int maxVectorValue(int **vectors, int n, int m)
{
    int maxValue = 0;

    // 创建二维数组dp，用于记录中间结果
    int **dp = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        dp[i] = (int *)malloc(m * sizeof(int));
    }

    // 初始化dp数组的第一行
    for (int j = 0; j < m; j++)
    {
        dp[0][j] = abs(vectors[0][j]);
    }

    // 通过动态规划求解最大向量价值
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            dp[i][j] = abs(vectors[i][j]) + dp[i - 1][j];
            if (j > 0)
            {
                dp[i][j] = (dp[i][j] > dp[i][j - 1]) ? dp[i][j] : dp[i][j - 1];
            }
        }
    }

    // 获取最大向量价值
    maxValue = dp[n - 1][m - 1];

    // 释放动态分配的内存
    for (int i = 0; i < n; i++)
    {
        free(dp[i]);
    }
    free(dp);

    return maxValue;
}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    // 创建二维数组存储输入的向量
    int **vectors = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        vectors[i] = (int *)malloc(m * sizeof(int));
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &vectors[i][j]);
        }
    }

    // 调用函数计算最大向量价值
    int maxValue = maxVectorValue(vectors, n, m);

    // 输出结果
    printf("%d\n", maxValue);

    // 释放动态分配的内存
    for (int i = 0; i < n; i++)
    {
        free(vectors[i]);
    }
    free(vectors);

    return 0;
}