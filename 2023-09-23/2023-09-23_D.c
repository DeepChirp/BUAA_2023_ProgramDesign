#include <stdio.h>
#include <math.h>

int main()
{
    int T, n;
    double sum1 = 0; // 存储公式1的值
    double sum2 = 0; // 存储公式2的值
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &n);

        for (int j = 0; j < n; j++)
        {
            sum1 += (double)(pow(-1, j) / (2 * j + 1)) * 4; // 公式1
            sum2 += (double)8 / pow((2 * j + 1), 2);        // 公式2
        }

        sum2 = sqrt(sum2);

        // 输出
        printf("%.6lf\n", fabs(sum1 - sum2));

        sum1 = 0; // 恢复公式1的值
        sum2 = 0; // 恢复公式2的值
    }

    return 0;
}
