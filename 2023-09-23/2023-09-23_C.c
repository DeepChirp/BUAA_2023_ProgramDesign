#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d*%d=%d ", i + 1, j + 1, (i + 1) * (j + 1));
        }
        printf("\n");
    }

    return 0;
}
