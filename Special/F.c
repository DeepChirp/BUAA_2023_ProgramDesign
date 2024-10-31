#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        unsigned int n;
        scanf("%u", &n);

        // 规律：每一组数中均是1,n+1,0,n循环
        if (n % 4 == 1)
        {
            printf("1\n");
        }
        else if (n % 4 == 2)
        {
            printf("%u\n", n + 1);
        }
        else if (n % 4 == 3)
        {
            printf("0\n");
        }
        else
        {
            printf("%u\n", n);
        }
    }

    return 0;
}