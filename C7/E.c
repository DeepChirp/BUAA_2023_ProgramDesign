#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 将字符串逆序，并返回新的字符串
char *reverse(char *s)
{
    int len = strlen(s);
    char *temp = malloc((len + 1) * sizeof(char)); // 分配内存
    for (int i = 0; i < len; i++)
    {
        temp[i] = s[len - i - 1];
    }
    temp[len] = '\0'; // 添加字符串结束符
    return temp;
}

// 加密函数
void encrypt(char *s)
{
    char *reversed = reverse(s);
    char temp[2001];
    strcpy(temp, s);        // 复制 s 到 temp
    strcat(temp, reversed); // 连接 reversed 到 temp
    free(reversed);         // 释放内存
    // 第 2k 位上的字符和 2k + 1 位上的字符分别组成两个新的字符串
    char s1[1001] = {0};
    char s2[1001] = {0};
    int len = strlen(temp);
    for (int i = 0; i < len; i++)
    {
        if (i % 2 == 0)
        {
            s1[i / 2] = temp[i];
        }
        else
        {
            s2[i / 2] = temp[i];
        }
    }

    // 比较字符串的字典序
    if (strcmp(s1, s2) < 0)
    {
        strcpy(s, s1);
    }
    else
    {
        strcpy(s, s2);
    }
}

int main()
{
    char s[1001] = {0};
    int n;
    scanf("%s", s);
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        encrypt(s);
    }

    printf("%s\n", s);

    return 0;
}
