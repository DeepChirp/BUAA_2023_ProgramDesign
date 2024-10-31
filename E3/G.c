#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int m, num;
        int lonelyFish = 0;

        scanf("%d", &m);

        for (int i = 0; i < m; i++)
        {
            scanf("%d", &num);
            lonelyFish ^= num;
        }

        if (lonelyFish == 0)
        {
            printf("Congratulations!\n");
        }
        else
        {
            printf("Single Dog! %d\n", lonelyFish);
        }
    }

    return 0;
}