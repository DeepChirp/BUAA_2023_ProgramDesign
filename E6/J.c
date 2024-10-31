#include <stdio.h>

int num[100001], temp[100001];
long long sum = 0;

// 注：本题相当于计算逆序对的数量。证明：先将最大的数与后面的数交换直到停止，交换次数=该数的逆序数，然后将次大数与后面的数交换直到停止，交换次数=次大数的逆序数，如此直到最小数，则总共的交换次数=整个数列的逆序对数。
// 归并算法
void mergeSort(int left, int right)
{
    if (left >= right)
    {
        return;
    }

    // 递归
    int mid = (left + right) / 2;
    mergeSort(left, mid);
    mergeSort(mid + 1, right);

    int i = left, j = mid + 1, k = left;
    while (i <= mid && j <= right)
    {
        if (num[i] <= num[j])
        {
            temp[k++] = num[i++];
        }
        else
        {
            temp[k++] = num[j++];
            sum += mid - i + 1;
        }
    }

    while (i <= mid)
    {
        temp[k++] = num[i++];
    }
    while (j <= right)
    {
        temp[k++] = num[j++];
    }

    for (i = left; i <= right; i++)
    {
        num[i] = temp[i];
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    mergeSort(0, n - 1);

    printf("%lld", sum);

    return 0;
}