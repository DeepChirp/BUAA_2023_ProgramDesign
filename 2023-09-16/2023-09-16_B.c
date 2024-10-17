#include <stdio.h>

int main()
{
    int numbers[4]; // 存储四个整数
    int sum_positive = 0;
    int sum_negative = 0;

    // 读取输入的四个整数
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // 计算正数和负数的能量块大小之和
    for (int i = 0; i < 4; i++)
    {
        if (numbers[i] > 0)
        {
            sum_positive += numbers[i];
        }
        else
        {
            sum_negative += numbers[i];
        }
    }

    // 输出结果
    printf("%d\n", sum_positive);
    printf("%d\n", sum_negative);

    return 0;
}
