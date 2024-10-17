#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    int line = ch - 'A' + 1; // 定义菱形上半部分的行数

    // 打印菱形的上半部分
    for (int i = 1; i <= line; i++) // i表示当前行数
    {
        // 空格数 = 上半部分行数 - 当前行数
        for (int j = 0; j < line - i; j++)
        {
            printf(" ");
        }

        // 打印中轴线及靠左的部分，其中：字母的数量 = 当前行数
        for (int j = 0; j < i; j++)
        {
            printf("%c", j + 'A');
        }

        // 打印中轴线靠右的部分，其中：字母的数量 = 当前行数 - 1
        for (int j = i - 1; j > 0; j--)
        {
            printf("%c", j - 1 + 'A');
        }

        printf("\n");
    }

    // 打印菱形的下半部分
    for (int i = line + 1; i <= 2 * line - 1; i++)
    {
        // 空格数 = 当前行数 - 上半部分行数
        for (int j = 0; j < i - line; j++)
        {
            printf(" ");
        }

        // 打印中轴线及靠左的部分，其中：字母的数量 = 2 * 上半部分行数 - 当前行数
        for (int j = 0; j < 2 * line - i; j++)
        {
            printf("%c", j + 'A');
        }

        // 打印中轴线靠右的部分，其中：字母的数量 = 2 * 上半部分行数 - 当前行数 - 1
        for (int j = 2 * line - i - 1; j > 0; j--)
        {
            printf("%c", j - 1 + 'A');
        }

        printf("\n");
    }

    return 0;
}
