#include <stdio.h>
int main()
{
    int n, td[6], sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < 6; k++)
        {
            scanf("%d", &td[k]);
        }
        for (int t = 5; t >= 0; t--)
        {
            if (td[t] > 48)
            {
                if (t != 0) // 避免数组越界
                {
                    td[t - 1] += td[t] - 48;
                }
            }
            else
            {
                sum += 48 - td[t];
            }
        }

        if (sum == 0)
        {
            printf("Success\n");
        }
        else
        {
            printf("Failure %d\n", sum);
        }
        sum = 0;
    }
    return 0;
}