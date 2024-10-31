#include <stdio.h>

#define MAX_N 1000000

int n, t;
int apples[MAX];

// 检查是否可以将最大苹果数量降低到 mid
int check(int mid)
{
    int moves = 0;
    // 遍历每个筐
    for (int i = 0; i < n; i++)
    {
        // 计算需要进行的转移操作次数
        moves += apples[i] / mid;
        // 如果筐中的苹果数量刚好可以被 mid 整除，那么需要减少一次转移操作
        if (apples[i] % mid == 0)
        {
            moves--;
        }
    }
    // 如果需要的转移操作次数小于或等于 t，那么返回 true
    return moves <= t;
}

int main()
{
    // 读取输入的筐的数量和转移操作的次数
    scanf("%d%d", &n, &t);
    int max_apple_count = 0;
    // 读取每个筐中的苹果数量，并计算出最大苹果数量
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &apples[i]);
        if (apples[i] > max_apple_count)
        {
            max_apple_count = apples[i];
        }
    }
    // 设定搜索范围为 [1, max_apple_count]
    int left = 1, right = max_apple_count;
    // 在搜索范围内进行二分搜索
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        // 如果可以将最大苹果数量降低到 mid，那么更新搜索范围为 [1, mid]
        if (check(mid))
        {
            right = mid;
        }
        // 否则，更新搜索范围为 [mid + 1, max_apple_count]
        else
        {
            left = mid + 1;
        }
    }
    // 输出搜索范围的下界，即最小的可能的最大苹果数量
    printf("%d\n", left);
    return 0;
}