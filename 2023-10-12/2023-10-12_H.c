#include <stdio.h>

int main()
{
    // 指定循环次数
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n, p;
        scanf("%d%d", &n, &p);
        for (int start = 1; start <= p; start++)
        {
            int num = start;
            while (num <= n)
            {
                printf("%d ", num);
                num += p;
            }
        }
        printf("\n");
    }

    return 0;
}
