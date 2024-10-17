#include <stdio.h>

int main()
{
    int ConvolutionalCode[41][41] = {0}; // 卷积核
    int InputData[41][41] = {0};         // 输入数据

    int n, m;
    scanf("%d%d", &n, &m);

    // 输入卷积核
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &ConvolutionalCode[i][j]);
        }
    }

    // 输入数据
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d", &InputData[i][j]);
        }
    }

    // 计算结果
    // 输出结果为 (m - n + 1) * (m - n + 1) 的矩阵
    for (int i = 1; i <= (m - n + 1); i++)
    {
        for (int j = 1; j <= (m - n + 1); j++)
        {
            int sum = 0;
            for (int k = 1; k <= n; k++)
            {
                for (int l = 1; l <= n; l++)
                {
                    sum += ConvolutionalCode[k][l] * InputData[i + k - 1][j + l - 1]; // 卷积核与输入数据的卷积，对应关系为 (i, j) -> (i + k - 1, j + l - 1)
                }
            }
            printf("%d ", sum);
        }
        printf("\n");
    }

    return 0;
}
