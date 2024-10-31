#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char s[1002] = {0};
    while (fgets(s, 1002, stdin) != NULL)
    {
        // 替换换行符
        s[strcspn(s, "\n")] = '\0';

        // 遍历字符串 s 中的每一个字符
        for (int i = 0; s[i]; i++)
        {
            // 使用 tolower 函数将大写字母转换为小写字母
            s[i] = tolower(s[i]);
        }

        char *position;
        char *index = s;
        int sum = 0;
        int len = strlen(s);

        while ((position = strstr(index, "kiss")) != NULL)
        {
            sum++;
            index = position + 4; // 从 kiss 后面开始查找
            // 如果 index 超出了字符串 s 的长度，则退出循环，防止越界
            if (index - s >= len)
            {
                break;
            }
        }

        // 输出结果
        if (sum == 0)
        {
            printf("0 -1\n");
        }
        else
        {
            printf("%d %lld\n", sum, index - s - 4);
        }
    }

    return 0;
}
