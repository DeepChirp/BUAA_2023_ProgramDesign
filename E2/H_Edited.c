#include <stdio.h>

int word[500005]; // 确保数组可以装下所有单词即可

int main()
{
    int n;
    scanf("%d", &n);
    char a, b, c, d;
    for (int i = 1; i <= n; i++)
    {
        getchar(); // 每一行的换行符需要处理
        scanf("%c%c%c%c", &a, &b, &c, &d);
        int num = (a - 'a') * 26 * 26 * 26 + (b - 'a') * 26 * 26 + (c - 'a') * 26 + (d - 'a'); // 使用26进制，确保数字不会重复
        if (word[num])
        {
            printf("Moca has already memorized this word!\n");
        }
        else
        {
            word[num] = 1;
            printf("Moca memorized a new word!\n");
        }
    }
    return 0;
}
