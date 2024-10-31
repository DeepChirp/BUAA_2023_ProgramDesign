#include <stdio.h>

int main()
{
    // 球员数量
    int m;
    scanf("%d", &m);

    int number; // 球员编号
    int type;   // 投球类型
    int is_hit; // 是否命中

    int PTS[m]; // 全场得分
    int FGA[m]; // 全场出手次数（两分球或三分球，不算罚球）
    int FTA[m]; // 罚球出手次数

    // 清空数组
    for (int i = 0; i < m; i++)
    {
        PTS[i] = 0;
        FGA[i] = 0;
        FTA[i] = 0;
    }

    while (scanf("%d%d%d", &number, &type, &is_hit) != EOF)
    {
        if (type == 1)
        {
            FTA[number - 1]++;
            if (is_hit)
            {
                PTS[number - 1]++;
            }
        }
        else
        {
            FGA[number - 1]++;
            if (is_hit)
            {
                PTS[number - 1] += type;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (FTA[i] == 0 && FGA[i] == 0)
        {
            printf("NULL\n");
        }
        else
        {
            printf("%.2f%%\n", (float)PTS[i] / (2 * (FGA[i] + 0.44 * FTA[i])) * 100);
        }
    }

    return 0;
}
