#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    scanf("%d", &a);
    int sum = a;
    for (int i = 1; i < 8; i++)
    {
        scanf("%d", &b);
        sum += b;
        // 更相减损术
        while (a != b)
        {
            if (a > b)
            {
                a = a - b;
            }
            if (a < b)
            {
                b = b - a;
            }
        }
    }
    printf("%d", sum / a);
}