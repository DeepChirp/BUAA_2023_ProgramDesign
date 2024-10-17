#include <stdio.h>

int main()
{
    int n, m;
    int op;
    unsigned long long x = 0;
    int pos = 0;
    int cnt = 0;

    scanf("%d%d", &n, &m);
    while (m--)
    {
        scanf("%d", &op);
        if (op == 1)
        {
            x = ~x;
        }
        else
        {
            x = x | (x + 1);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (x & 1)
        {
            printf("%d ", pos + 1);
            cnt++;
        }
        x >>= 1;
        pos++;
    }
    putchar('\n');
    printf("%d\n", cnt);

    return 0;
}
