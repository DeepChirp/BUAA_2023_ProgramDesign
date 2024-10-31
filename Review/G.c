#include <stdio.h>
#include <stdlib.h>

// 定义区间结构体
typedef struct Interval
{
    int left;
    int right;
} Interval;

// 比较函数，用于qsort
int Compare(const void *a, const void *b)
{
    return ((Interval *)a)->left - ((Interval *)b)->left;
}

int main()
{
    Interval *intervals = malloc(sizeof(Interval));
    int n = 0;
    int capacity = 1;

    // 读取输入的区间
    while (scanf("%d%d", &intervals[n].left, &intervals[n].right) != EOF)
    {
        n++;
        // 如果数组已满，扩容
        if (n >= capacity)
        {
            capacity *= 2;
            intervals = realloc(intervals, capacity * sizeof(Interval));
        }
    }

    // 对区间进行排序
    qsort(intervals, n, sizeof(Interval), Compare);

    // 合并重叠的区间
    int start = intervals[0].left;
    int end = intervals[0].right;
    for (int i = 1; i < n; i++)
    {
        if (intervals[i].left <= end)
        {
            end = end > intervals[i].right ? end : intervals[i].right;
        }
        else
        {
            printf("%d %d\n", start, end);
            start = intervals[i].left;
            end = intervals[i].right;
        }
    }
    printf("%d %d\n", start, end);

    free(intervals);

    return 0;
}