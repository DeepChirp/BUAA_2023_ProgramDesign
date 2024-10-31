#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar(); // 丢弃第一行末的换行符

    char str[501];
    scanf("%s", str);

    int newIndex = 0;
    for (int i = 0; i < n; i++)
    {
        // 如果对应的字母不为C、V、B，则将其复制到newIndex上
        if (str[i] != 'C' && str[i] != 'V' && str[i] != 'B')
        {
            str[newIndex] = str[i];
            newIndex++;
        }
    }
    str[newIndex] = '\0'; // 在新字符串末尾添加字符串结束符

    printf("%s\n", str);

    return 0;
}