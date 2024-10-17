#include <stdio.h>

// 快速排序
void quickSort(int *arr, int left, int right)
{
    if (left >= right)
    {
        return;
    }
    int i = left, j = right, key = arr[left];
    while (i < j)
    {
        while (i < j && arr[j] >= key)
        {
            j--;
        }
        arr[i] = arr[j];
        while (i < j && arr[i] <= key)
        {
            i++;
        }
        arr[j] = arr[i];
    }
    arr[i] = key;
    quickSort(arr, left, i - 1);
    quickSort(arr, i + 1, right);
}

int main()
{
    int num[100];
    // 指定循环次数
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    quickSort(num, 0, n - 1);

    int a;

    while (scanf("%d", &a) != EOF)
    {
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (a == num[i])
            {
                printf("%d\n", i + 1);
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            printf("-1\n");
        }
    }

    return 0;
}
