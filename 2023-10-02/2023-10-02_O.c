#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char code[10005] = {};
    int len = 0;
    char c;

    while ((c = getchar()) != EOF)
    {
        code[len++] = c;
    }

    // 声明新的字符串用于存储替换后的代码
    char newCode[20005] = {};
    int newLen = 0;

    // 替换逻辑运算符
    for (int i = 0; i < len - 1; i++)
    {
        if (code[i] == '&' && code[i + 1] == '&')
        {
            newCode[newLen++] = 'a';
            newCode[newLen++] = 'n';
            newCode[newLen++] = 'd';
            i += 1;
        }
        else if (code[i] == '|' && code[i + 1] == '|')
        {
            newCode[newLen++] = 'o';
            newCode[newLen++] = 'r';
            i += 1;
        }
        else if (code[i] == '!')
        {
            newCode[newLen++] = 'n';
            newCode[newLen++] = 'o';
            newCode[newLen++] = 't';
            newCode[newLen++] = ' ';
        }
        else
        {
            newCode[newLen++] = code[i];
        }
    }

    // 处理最后一个字符
    newCode[newLen++] = code[len - 1];
    newCode[newLen] = '\0';

    printf("%s", newCode);

    return 0;
}