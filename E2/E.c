#include <stdio.h>

int main()
{
    int n;
    int lack = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int times[6];
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &times[j]);
            // 如果TD次数超过48次，且之前的学期有没刷够的部分，则补充
            if (times[j] > 48 && lack > 0)
            {
                lack -= times[j] - 48;
                // 缺少的次数不能为负数
                if (lack < 0)
                {
                    lack = 0;
                }
            }
            // 如果TD次数不到48次，则需之后的学期补上
            else if (times[j] < 48)
            {
                lack += 48 - times[j];
            }
        }
        if (lack == 0)
        {
            printf("Success\n");
        }
        else
        {
            printf("Failure %d\n", lack);
        }
        lack = 0; // 将缺少的次数清空，用于下一次循环
    }

    return 0;
}
