#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, m;
    int max = 0;
    int a;
    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        max = a > max ? a : max;
    }

    printf("%d\n", 2 * max);

    return 0;
}
