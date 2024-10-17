#include <stdio.h>

int main()
{
    // 存储个数为n的数组
    int n;
    scanf("%d", &n);
    int numbers[n];

    // 读取输入的四个整数并累加
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // 输入需求总数
    int need;
    scanf("%d", &need);

    // 判断完成的需求数与需求总数的关系
    if (sum <= 0)
    {
        printf("0\n");
        printf("Moca finish 0 requirement!\n");
    }
    else if (sum >= need)
    {
        printf("%d\n", need);
        printf("Moca finish all requirements!\n");
    }
    else
    {
        printf("%d\n", sum);
    }

    return 0;
}
