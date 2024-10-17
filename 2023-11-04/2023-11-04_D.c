#include <stdio.h>
int main()
{
    char str[1005];
    char s[1005];
    char format[105];
    char format_p[105];
    int k, x;

    // 读入
    fgets(str, 1005, stdin);
    fgets(format, 105, stdin);
    scanf("%d%d", &k, &x);
    // 用sscanf，以format作为格式化字符串，从str中读入内容并存入s
    sscanf(str, format, s);
    // 用sprintf，将"%k.xs"输入至format_p
    sprintf(format_p, "%%%d.%ds", k, x);
    // 用printf，以format_p作为格式化字符串输出s
    printf(format_p, s);

    return 0;
}