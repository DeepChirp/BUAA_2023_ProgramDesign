#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    while (scanf("%s", str) != EOF)
    {
        int len = strlen(str);
        int count = 0;
        for (int i = 0; i < len / 2; i++)
        {
            if (str[i] != str[len - 1 - i])
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("yes\n");
        }
        else
        {
            printf("no %d\n", count);
        }
    }
    return 0;
}