#include <stdio.h>

int main()
{
    int n, m, limit;
    int count = 0; // 幸运面包的数量
    long long current_love = 0;
    int love_change[200001] = {0};
    scanf("%d%d%d", &n, &m, &limit);

    while (m--)
    {
        int l, r, x;
        scanf("%d%d%d", &l, &r, &x);
        love_change[l] += x;
        love_change[r + 1] -= x;
    }

    for (int i = 1; i <= n; i++)
    {
        current_love += love_change[i];
        if (current_love >= limit)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
