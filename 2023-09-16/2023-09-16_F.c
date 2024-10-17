#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 输入及格线
    int pass_line;
    scanf("%d", &pass_line);

    // 获取学生人数及总成绩
    int count_all = 0;  // 所有学生人数
    int count_pass = 0; // 及格学生人数
    int sum_all = 0;    // 所有学生的总成绩
    int sum_pass = 0;   // 及格学生的总成绩
    int score;          // 每个学生的分数

    while (1)
    {
        scanf("%d", &score);
        if (score == -1) //-1表示输入结束
        {
            break;
        }
        else if (score >= pass_line) // 存储及格学生的总成绩及人数
        {
            sum_pass += score;
            count_pass++;
        }
        sum_all += score;
        count_all++;
    }

    // 输出平均成绩
    int average_all = sum_all / count_all;
    int average_pass = (count_pass == 0) ? -1 : sum_pass / count_pass;

    // 输出
    printf("%d %d %d\n", count_pass, average_all, average_pass);

    return 0;
}
