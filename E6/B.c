#include <stdio.h>
#include <string.h>

int main()
{
    char str[32];
    while (fgets(str, sizeof(str) / sizeof(str[0]), stdin) != NULL) // 避免gets()函数的缺陷
    {
        // 去掉换行符
        str[strcspn(str, "\n")] = '\0';

        int n; // 表示数组长度
        scanf("%d", &n);
        getchar(); // 丢弃换行符

        // 判断数组类型
        if (strcmp(str, "char") == 0)
        {
            printf("%llu\n", sizeof(char) * n);
        }
        else if (strcmp(str, "short") == 0)
        {
            printf("%llu\n", sizeof(short) * n);
        }
        else if (strcmp(str, "int") == 0)
        {
            printf("%llu\n", sizeof(int) * n);
        }
        else if (strcmp(str, "long") == 0)
        {
            printf("%llu\n", sizeof(long) * n);
        }
        else if (strcmp(str, "long long") == 0)
        {
            printf("%llu\n", sizeof(long long) * n);
        }
        else
        {
            printf("Err0r!\n");
        }
    }

    return 0;
}
