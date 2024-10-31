#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int id;
    int len;
    char str[102];
} string;

int cmp(const void *a, const void *b)
{
    string *c = (string *)a;
    string *d = (string *)b;
    if (c->len > d->len)
    {
        return 1;
    }
    else if (c->len < d->len)
    {
        return -1;
    }
    else
    {
        if (strcmp(c->str, d->str) < 0)
        {
            return -1;
        }
        else if (strcmp(c->str, d->str) > 0)
        {
            return 1;
        }
        else
        {
            return (c->id - d->id);
        }
    }
}

string str[10000];

int main()
{
    int num = 0;
    while (fgets(str[num].str, 102, stdin) != NULL)
    {
        str[num].str[strcspn(str[num].str, "\n")] = '\0';
        str[num].id = num + 1;
        str[num].len = strlen(str[num].str);
        num++;
    }

    qsort(str, num, sizeof(string), cmp);

    for (int i = 0; i < num; i++)
    {
        printf("%d:%d:%s\n", str[i].id, str[i].len, str[i].str);
    }

    return 0;
}
