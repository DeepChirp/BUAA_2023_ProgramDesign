#include <stdio.h>

// 用于计算最终成绩
int calculateScore(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int current = a[i];

        // 如果玩家在该轮的前两轮中的任何一轮中击中了10个瓶子，则该轮的成绩翻倍
        if (i > 1 && (a[i - 2] == 10 || a[i - 1] == 10))
        {
            sum += 2 * current;
        }
        else
        {
            sum += current;
        }
    }
    return sum;
}

int main()
{
    // 输入比赛轮次
    int n;
    scanf("%d", &n);

    // 定义并输入两个数组的值
    int violet[n];
    int lilsio[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &violet[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &lilsio[i]);
    }

    // 计算成绩
    int violetScore = calculateScore(violet, n);
    int lilsioScore = calculateScore(lilsio, n);

    // 输出
    printf("%d %d\n", violetScore, lilsioScore);

    if (violetScore > lilsioScore)
    {
        printf("violet\n");
    }
    else if (violetScore < lilsioScore)
    {
        printf("Lilsio\n");
    }
    else
    {
        printf("Let's play again!\n");
    }

    return 0;
}