#include <stdio.h>

void sit(int l, int r)
{
    if (l > r)
    {
        return;
    }

    if (l == r)
    {
        printf("0");
        return;
    }

    if (l + 1 == r)
    {
        printf("00");
        return;
    }

    int m = (l + r) / 2;

    sit(l, m - 1);
    printf("1");
    sit(m + 1, r);
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("1");
    if (n == 2)
    {
        printf("0");
    }

    else if (n >= 3)
    {
        sit(2, n - 1);
        printf("1");
    }

    return 0;
}
