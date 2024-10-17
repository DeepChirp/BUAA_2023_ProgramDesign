#include <stdio.h>

int num[1000005] = {0};

// 交换两个数
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// 冒泡排序
void bubbleSort(int *a, int n, int k)
{
    int i, j;
    for (i = 0; i < k; i++)
    {
        for (j = n - 1; j > i; j--)
        {
            if (a[j] < a[j - 1])
            {
                swap(&a[j], &a[j - 1]);
            }
        }
    }
}

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    bubbleSort(num, n, k);
    for (int i = 0; i < k; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}