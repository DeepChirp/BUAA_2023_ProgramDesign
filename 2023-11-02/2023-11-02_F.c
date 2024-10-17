#include <stdio.h>

int main()
{
    char map[102][102] = {0};
    int m, n;
    scanf("%d%d", &m, &n);
    getchar(); // 读取换行符
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            map[i][j] = getchar();
        }
        getchar(); // 读取换行符
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (map[i][j] == 'M')
            {
                putchar('M');
            }
            else
            {
                int count = 0;
                for (int x = i - 1; x <= i + 1; x++)
                {
                    for (int y = j - 1; y <= j + 1; y++)
                    {
                        if (map[x][y] == 'M')
                        {
                            count++;
                        }
                    }
                }
                putchar(count + '0');
            }
        }
        putchar('\n');
    }

    return 0;
}
