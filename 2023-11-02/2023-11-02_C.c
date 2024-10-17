#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001] = {0};
    char character;
    fgets(s, 1001, stdin);
    // 替换换行符
    s[strcspn(s, "\n")] = '\0';

    while ((character = getchar()) != EOF)
    {
        char *first = strchr(s, character);
        char *last = strrchr(s, character);
        if (first == NULL)
        {
            printf("-1");
        }
        else if (first == last)
        {
            printf("%lld", first - s);
        }
        else
        {
            printf("%lld", last - first);
        }
        putchar('\n');
    }

    return 0;
}
