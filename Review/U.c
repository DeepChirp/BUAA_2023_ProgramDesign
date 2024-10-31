#include <stdio.h>
#include <stdlib.h>
#define eps 1e-8

typedef struct
{
    char str[11];
    double score;
    int time;
} student;

int cmp(const void *a, const void *b)
{
    student *c = (student *)a;
    student *d = (student *)b;
    if (c->score - d->score > eps)
    {
        return -1;
    }
    else if (c->score - d->score < -eps)
    {
        return 1;
    }
    else
    {
        if (c->time < d->time)
        {
            return -1;
        }
        else if (c->time > d->time)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

student stu[100000];

int main()
{
    int i = 0;
    while (scanf("%s %lf %d", stu[i].str, &stu[i].score, &stu[i].time) != EOF)
    {
        i++;
    }

    qsort(stu, i, sizeof(student), cmp);

    for (int j = 0; j < i; j++)
    {
        printf("%10s %8.2f %10d\n", stu[j].str, stu[j].score, stu[j].time);
    }

    return 0;
}
