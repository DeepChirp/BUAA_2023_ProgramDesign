#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        double t[105] = {0};
        int sum = 0; // 连续的低于 10 的“ 5 天滑动均值”
        int isWinter = 0;
        for (int i = 1; i <= n; i++)
        {
            scanf("%lf", &t[i]);
        }
        for (int i = 5; i <= n; i++)
        {
            double average = (t[i - 4] + t[i - 3] + t[i - 2] + t[i - 1] + t[i]) / 5;
            if (average - 10.0 < 0)
            {
                sum++;
                if (sum == 5)
                {
                    for (int j = i - 8; j < i - 3; j++)
                    {
                        if (t[j] < 10.0)
                        {
                            printf("Success %d\n",j);
                            break;
                        }
                    }
                    isWinter = 1;
                    break;
                }
            }
            else
            {
                sum = 0;
            }
        }
        if (!isWinter)
        {
            printf("Failure\n");
        }
    }

    return 0;
}
