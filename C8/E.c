#include <stdio.h>
#include <stdlib.h>

// 定义结构体，用于存储数字及其二进制中1的个数
typedef struct
{
    int value;
    int count;
} Number;

int Compare(const void *a, const void *b)
{
    Number num1 = *(Number *)a;
    Number num2 = *(Number *)b;
    if (num1.count != num2.count)
    {
        return num1.count - num2.count;
    }
    else
    {
        if (num2.value > num1.value)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
}

int countOnes(int n)
{
    int count = 0;
    unsigned int mask = 1;
    for (int i = 0; i < 32; i++)
    {
        if (n & mask)
        {
            count++;
        }
        mask <<= 1;
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    Number numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i].value);
        numbers[i].count = countOnes(numbers[i].value);
    }
    qsort(numbers, n, sizeof(Number), Compare);
    for (int i = 0; i < n; i++)
    {
        printf("%11d %2d ", numbers[i].value, numbers[i].count);
        for (int j = 31; j >= 0; j--)
        {
            printf("%d", (numbers[i].value >> j) & 1);
        }
        printf("\n");
    }
    return 0;
}