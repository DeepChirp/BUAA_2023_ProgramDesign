#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int initial[9][9], final[9][9];
        int row[9][10] = {0}, col[9][10] = {0}, box[9][10] = {0};
        int flag = 1;

        // 读取初始数独
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                scanf("%d", &initial[i][j]);
            }
        }

        // 读取完成的数独并检查
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                scanf("%d", &final[i][j]);
                if (initial[i][j] != 0 && initial[i][j] != final[i][j]) // 检查初始数独是否有错误
                {
                    flag = 0;
                }
                if (row[i][final[i][j]] || col[j][final[i][j]] || box[i / 3 * 3 + j / 3][final[i][j]]) // 检查行、列、宫是否有重复数字
                {
                    flag = 0;
                }
                row[i][final[i][j]] = 1;
                col[j][final[i][j]] = 1;
                box[i / 3 * 3 + j / 3][final[i][j]] = 1;
            }
        }

        // 输出结果
        if (flag)
        {
            printf("Moca finish this sudoku perfectly!\n");
        }
        else
        {
            printf("Moca is so careless!\n");
        }
    }
    return 0;
}