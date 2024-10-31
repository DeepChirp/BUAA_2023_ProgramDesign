#include <stdio.h>
#include <string.h>

int main()
{
    // 指定循环次数
    int n;
    int a[127] = {0};
    scanf("%d", &n);
    getchar();

    while (n--)
    {
        char ch = getchar();
        a[ch]++;
        if (ch >= 'a' && ch <= 'z')
        {
            ch -= 32;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch += 32;
        }
        putchar(ch);
    }

    int max = 0;
    int max_index = 0;

    for (int i = 0; i < 126; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_index = i;
        }
    }

    putchar('\n');
    putchar(max_index);
    putchar('\n');
    printf("%d\n", max);

    return 0;
}
