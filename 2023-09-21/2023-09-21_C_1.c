#include <stdio.h>

int main()
{
    char c;
    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            c = '9' - (c - '0'); // 数字翻转规则
        }
        else if (c >= 'a' && c <= 'z')
        {
            c = 'z' - (c - 'a'); // 小写字母翻转规则
        }
        putchar(c);
    }

    return 0;
}