#include <stdio.h>

int main()
{
    char c;
    int n;
    scanf("%c%d", &c, &n);

    for (int i = 1; i <= n; i++)
    {
        // 输出 i-1 个空格
        for (int j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        // 输出 n-i+1 个字符 c
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }

    return 0;
}