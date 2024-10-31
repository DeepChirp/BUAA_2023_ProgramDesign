#include <stdio.h>

int main()
{
    int n; // 问题个数
    scanf("%d", &n);

    while (n--)
    {
        int m; // 骰子个数
        int a; // 红色点数之和
        int b; // 黑色点数之和
        scanf("%d%d%d", &m, &a, &b);

        int red = (a / 4) + (a % 4); // 红色骰子的最少数量

        // 红色骰子的数目不为0
        if (red != 0)
        {
            while (1)
            {
                int black = m - red; // 黑色骰子个数
                // 黑色骰子少于0，不成立
                if (black < 0)
                {
                    printf("No\n");
                    break;
                }
                // 黑色骰子为0，且黑色点数之和为0，成立
                else if (black == 0 && b == 0)
                {
                    printf("Yes\n");
                    break;
                }
                // 黑色骰子为1，且黑色点数为2、3、5、6，成立
                else if (black == 1 && (b == 2 || b == 3 || b == 5 || b == 6))
                {
                    printf("Yes\n");
                    break;
                }
                // 黑色骰子多于2时，黑色的最小点数和为2 * black，最大点数和为6 * black
                else if (black >= 2 && (b >= 2 * black && b <= 6 * black))
                {
                    printf("Yes\n");
                    break;
                }
                red += 3; // 红色骰子的数量相差3时，可以保证红色点数能够相同
            }
        }
        // 红色骰子的数目为0
        else
        {
            int black = m; // 黑色骰子个数
            // 黑色骰子为0，且黑色点数之和为0，成立
            if (black == 0 && b == 0)
            {
                printf("Yes\n");
            }
            // 黑色骰子为1，且黑色点数为2、3、5、6，成立
            else if (black == 1 && (b == 2 || b == 3 || b == 5 || b == 6))
            {
                printf("Yes\n");
            }
            // 黑色骰子多于2时，黑色的最小点数和为2 * black，最大点数和为6 * black
            else if (black >= 2 && (b >= 2 * black && b <= 6 * black))
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }

    return 0;
}
