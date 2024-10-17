#include <stdio.h>

int main()
{
    int card[5] = {0};
    int type, num;
    int times = 0;

    while (scanf("%d%d", &type, &num) != EOF)
    {
        times++;
        card[type - 1] += num;
        if (card[type - 1] == 9)
        {
            printf("%d %d\n", times, type);
            card[type - 1] = 0; // 将对应的数量清空
        }
    }

    return 0;
}
