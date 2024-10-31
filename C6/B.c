#include <stdio.h>

int main()
{
    int op, t, n;
    int sum = 0;

    while (scanf("%d%d%d", &op, &t, &n) != EOF)
    {
        if (op == 1)
        {
            sum += (t + 20 * 60 * (n - 1));
        }
    }

    printf("%d", sum);

    return 0;
}
