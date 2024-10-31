#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    int m, n;
    char str[100];
    int v, pow;
    int res[100];

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d%d", &m, &n);
        scanf("%s", str);
        int len = strlen(str);
        v = 0, pow = 1; // 初始化变量
        for (int i = len - 1; i >= 0; i--)
        {
            v += (int)(str[i] - '0') * pow;
            pow *= m;
        }

        // 特殊情况
        if (v == 0)
        {
            printf("0\n");
            continue;
        }

        int cnt = 0;
        while (v)
        {
            res[cnt] = v % n;
            v /= n;
            cnt++;
        }

        for (int i = cnt - 1; i >= 0; i--)
        {
            printf("%d", res[i]);
        }
        putchar('\n');
    }

    return 0;
}
