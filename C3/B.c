#include <stdio.h>

int main()
{
    unsigned int n;
    int t;
    int k, op;
    scanf("%lld", &n);
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &k, &op);
        if (op == 0)
        {
            n = n & (~(1 << k));
        }
        else if (op == 1)
        {
            n = n | (1 << k);
        }
        printf("%lld\n", n);
    }
    printf("%lld\n", n);

    return 0;
}
