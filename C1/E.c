#include <stdio.h>

int main()
{
    int a, b, n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &a, &b);
        if (a == 0)
        {
            printf("Wait. That's illegal.\n");
        }
        else
        {
            printf("%d mod %d = %d\n", b, a, b % a);
        }
    }
    return 0;
}