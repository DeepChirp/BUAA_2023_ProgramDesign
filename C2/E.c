#include <stdio.h>

int grade(int a[], int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int current = a[i];

        if (i > 2 && (a[i - 2] == 10 || a[i - 1] == 10))
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
    // 比赛轮次
    int n;
    scanf("%d", &n);

    int violet[n];
    int Lilsio[n];

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &violet[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &Lilsio[i]);
    }

    int violet_grade = grade(violet, n);
    int Lilsio_grade = grade(Lilsio, n);
    printf("%d %d\n", violet_grade, Lilsio_grade);
    if (violet_grade > Lilsio_grade)
    {
        printf("violet");
    }
    else if (violet_grade < Lilsio_grade)
    {
        printf("Lilsio");
    }
    else
    {
        printf("Let's play again!");
    }

    return 0;
}
