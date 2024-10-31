#include <stdio.h>

// 二分查找函数，返回key在序列中第一次和最后一次出现的位置
void binarySearchFirstAndLast(int arr[], int n, int key, int *first, int *last)
{
    *first = -1;
    *last = -1;

    int low = 0, high = n - 1;
    // 找到第一次出现的位置
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            *first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    low = 0, high = n - 1;
    // 找到最后一次出现的位置
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            *last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < t; i++)
    {
        int key;
        scanf("%d", &key);

        int first, last;
        binarySearchFirstAndLast(arr, n, key, &first, &last);

        if (first != -1 && last != -1)
        {
            printf("%d %d\n", first + 1, last - first + 1);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}