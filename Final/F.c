#include <stdio.h>
#include <string.h>

int main()
{
    int chess[104][104];
    for (int i = 0; i < 104; i++)
    {
        for (int j = 0; j < 104; j++)
        {
            chess[i][j] = 1;
        }
    }

    int m, n, t;
    int i, j;
    scanf("%d%d%d", &m, &n, &t);

    while (t--)
    {
        scanf("%d%d", &i, &j);
        // 偏移坐标
        i += 2;
        j += 2;
        chess[i][j] = 0;

        chess[i - 2][j - 1] = 0;
        chess[i - 2][j + 1] = 0;
        chess[i - 1][j - 2] = 0;
        chess[i - 1][j + 2] = 0;
        chess[i + 1][j - 2] = 0;
        chess[i + 1][j + 2] = 0;
        chess[i + 2][j - 1] = 0;
        chess[i + 2][j + 1] = 0;
    }

    for (int i = 3; i < m + 3; i++)
    {
        for (int j = 3; j < n + 3; j++)
        {
            printf("%d", chess[i][j]);
        }
        putchar('\n');
    }

    return 0;
}
