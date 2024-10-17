#include <stdio.h>
#include <math.h>

int main()
{
    // 输入坐标
    unsigned int x1, y1, x2, y2;
    scanf("%u%u", &x1, &y1);
    scanf("%u%u", &x2, &y2);

    // 计算距离
    unsigned int distance = 0;

    while (x1 != x2 || y1 != y2)
    {
        // 如果在同一行，那么剩余的距离就是x1-x2
        if (x1 == x2)
        {
            distance += abs(y1 - y2);
            break;
        }
        else if (x1 > x2)
        {
            if (y1 % 2 == 0) // 可以跨行的情况
            {
                x1--;
                y1--;
                distance++;
            }
            else
            {
                if (y1 > y2)
                {
                    y1--;
                }
                else
                {
                    y1++;
                }
                distance++;
            }
        }
        else
        {
            if (y2 % 2 == 0) // 可以跨行的情况
            {
                x2--;
                y2--;
                distance++;
            }
            else
            {
                if (y2 > y1)
                {
                    y2--;
                }
                else
                {
                    y2++;
                }
                distance++;
            }
        }
    }

    printf("%u\n", distance);

    return 0;
}
