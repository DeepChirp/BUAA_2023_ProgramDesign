#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    // 输入相应的声调数据
    int tones[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tones[i]);
    }

    int maxAverage = 0;

    // 参与高声部组的最少人数为m人，最多人数为n人；i表示参与高声部组的人数
    // 但是如果区间大于2m，那么一定能在该较大区间中找到一个平均值不小于它的较小区间
    for (int i = m; i <= 2 * m - 1; i++)
    {
        int sum = 0;

        // 累加前i个人的分数
        for (int j = 0; j < i; j++)
        {
            sum += tones[j];
        }

        for (int j = i; j < n; j++)
        {
            sum += tones[j] - tones[j - i];
            int average = (sum + i / 2) / i; // int average = round(sum / i);
            if (average > maxAverage)
            {
                maxAverage = average;
            }
        }
    }

    printf("%d\n", maxAverage);

    return 0;
}