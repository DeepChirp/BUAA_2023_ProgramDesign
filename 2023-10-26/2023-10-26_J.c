#include <stdio.h>

int main()
{
    int task[31][31] = {0};
    int n, s;
    scanf("%d%d", &n, &s);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &task[i][0]);
    }

    for (int i = 1; i <= n; i++)
    {
        int k;
        scanf("%d", &k);
        for (int i = 0; i < k; i++)
        {
            int num;
            scanf("%d", &num);
            task[i][num] = 1;
        }
    }

    return 0;
}
