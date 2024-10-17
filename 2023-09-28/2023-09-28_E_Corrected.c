#include <stdio.h>

int main()
{
    int m, n;
    while (scanf("%d %d", &m, &n) != EOF)
    {
        if ((m == 1 && n == 2) || (m == 2 && n == 1))
        {
            printf("YEEEEE!!!\n");
        }
        else
        {
            printf("W00000!!!\n");
        }
    }
    return 0;
}
