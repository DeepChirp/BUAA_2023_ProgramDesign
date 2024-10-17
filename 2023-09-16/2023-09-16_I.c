#include <stdio.h>

int main()
{
    int x1, y1, x2, y2, x3, y3;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);

    int N = 1; // 从最小的 N 值开始尝试
    while (1)
    {
        if (N % x1 == y1 && N % x2 == y2 && N % x3 == y3)
        {
            break;
        }
        N++;
    }

    printf("%d\n", N);

    return 0;
}