#include <stdio.h>

int x[15], y[15], z[15];

int dot(int i, int j) // 计算第i个向量与第j个向量的点积，返回点积结果。
{
    return x[i] * x[j] + y[i] * y[j] + z[i] * z[j];
}

void cross(int i, int j, int k) // 计算第i个向量叉乘第j个向量，结果存入第k个向量
{
    x[k] = y[i] * z[j] - y[j] * z[i];
    y[k] = z[i] * x[j] - z[j] * x[i];
    z[k] = x[i] * y[j] - x[j] * y[i];
}

int main()
{
    int n, T;
    scanf("%d%d", &n, &T);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d%d%d", &x[i], &y[i], &z[i]);
    }
    while (T--)
    {
        int i, j, k;
        scanf("%d%d%d", &i, &j, &k);
        cross(i, j, n + 1);
        printf("%d\n", dot(n + 1, k));
    }
    return 0;
}