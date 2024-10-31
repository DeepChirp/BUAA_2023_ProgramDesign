#include <stdio.h>

int main()
{
    int c;
    while (scanf("%d", &c) != EOF) // 读入多组数据，每次输入一个整数n
    {
        printf("%c\n", (char)c); // 强制类型转换
    }
    return 0;
}