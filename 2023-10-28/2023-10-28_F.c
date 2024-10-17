#include <stdio.h>
#include <string.h>

int main()
{
    // 读入原始的字符串
    char s[101] = {0};
    scanf("%s", s);

    int len = strlen(s); // 字符串长度

    // 将原始的字符串复制到min字符串中
    char min[101] = {0};
    strcpy(min, s);

    // 从第一个字符开始移动字符串
    for (int i = 0; i < len; i++)
    {
        char temp[101] = {0};
        // 复制移动之后的字符串
        for (int j = 0; j < len; j++)
        {
            if (i + j < len)
            {
                temp[j] = s[i + j];
            }
            else
            {
                temp[j] = s[i + j - len];
            }
        }
        // 比较字符串大小
        if (strcmp(temp, min) < 0)
        {
            strcpy(min, temp);
        }
    }
    printf("%s", min);

    return 0;
}
