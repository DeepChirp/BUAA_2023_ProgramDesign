#include <stdio.h>

int a[3000001];

int main()
{
    int n, m;
    long long sum = 0;
    int maxIndex; // 用于存储数组中最大数的索引
    scanf("%d%d", &n, &m);

    for (int i = 0; i < n + 1; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < m + 1; i++)
    {
        maxIndex = 0; // 将索引清空
        for (int j = 1; j < n + 1; j++)
        {
            if (a[j] > a[maxIndex])
            {
                maxIndex = j;
            }
        }
        a[maxIndex] = (a[maxIndex] > 6) ? 6 : a[maxIndex]; // 如果原价低于6，那么就按照原价购买
    }

    for (int i = 0; i < n + 1; i++)
    {
        sum += a[i];
    }

    printf("%lld", sum);

    return 0;
}