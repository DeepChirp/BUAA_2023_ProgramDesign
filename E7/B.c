#include <stdio.h>
long long p[50][50], s[50][50], l[50][50]; // 定义三个矩阵

int main()
{
    int m, n, k;                 // m, n, k 分别表示两个输入矩阵的行数和列数
    scanf("%d%d%d", &m, &n, &k); // 读取 m, n, k 的值

    int i, j, q;
    // 读取第一个矩阵的值
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%lld", &s[i][j]);
        }
    }
    // 读取第二个矩阵的值
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            scanf("%lld", &l[i][j]);
        }
    }
    // 计算矩阵乘法
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < k; j++)
        {
            for (q = 0; q < n; q++)
            {
                p[i][j] += s[i][q] * l[q][j]; // 计算结果矩阵的每个元素
            }
            printf("%lld ", p[i][j]); // 输出结果矩阵的每个元素
        }
        printf("\n"); // 每行输出完毕后换行
    }

    return 0;
}