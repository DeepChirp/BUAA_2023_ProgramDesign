#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int x1, y1, x2, y2;
        char s[1005];
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        scanf("%s", s);

        int len = strlen(s);
        int dx = x2 - x1, dy = y2 - y1;
        int cntE = 0, cntW = 0, cntN = 0, cntS = 0;

        // 读取字符串中的字符
        for (int i = 0; i < len; i++)
        {
            switch (s[i])
            {
            case 'E':
                cntE++;
                break;
            case 'W':
                cntW++;
                break;
            case 'N':
                cntN++;
                break;
            case 'S':
                cntS++;
                break;

            default:
                break;
            }
        }

        // 判断是否能到达终点
        int flag = 1;
        if ((dx > 0 && cntE < dx) || (dx < 0 && cntW < -dx) || (dy > 0 && cntN < dy) || (dy < 0 && cntS < -dy))
            flag = 0;
        if (!flag)
            printf("We want to live in Gensokyo forever...\n");
        else
            printf("%d\n", abs(dx) + abs(dy));
    }
    return 0;
}