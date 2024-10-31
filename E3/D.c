#include <stdio.h>

int main()
{
    int n;                                             // 储存人数
    int score[10];                                     // 储存学生每道题的分数
    int full[] = {30, 20, 10, 10, 10, 10, 5, 5, 5, 5}; // 存储每道题的总分
    int sum = 0;                                       // 储存所有学生的总分
    int ak = 0;
    int pass = 0;
    int NoAC = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int grade = 0; // 储存每个学生的总分
        int isAC = 0;
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &score[j]);
            grade += score[j];
            // 判断是否无AC
            if (!isAC && score[j] == full[j])
            {
                isAC = 1;
            }
        }

        // 判断是否及格
        if (grade >= 60)
        {
            pass++;
        }

        // 判断是否ak
        if (grade == 110)
        {
            ak++;
        }

        // 判断总分是否超过100
        if (grade > 100)
        {
            grade = 100;
        }

        // 累加无AC的人数
        if (!isAC)
        {
            NoAC++;
        }

        sum += grade;
    }

    // 输出结果
    printf("%.2f\n", (float)sum / n);
    printf("%d\n", pass);
    printf("%d\n", ak);
    printf("%d\n", NoAC);

    return 0;
}
