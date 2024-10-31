#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    while (N--)
    {
        int ni;
        scanf("%d", &ni);

        // 判断胜负情况
        if (ni % 2 == 0)
        {
            printf("Hecatia W1N!\n");
        }
        else
        {
            printf("Junko W1N!\n");
        }
    }

    return 0;
}