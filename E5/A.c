#include <stdio.h>
#define positive(x) ((x) > 0 ? (x) : -(x))

int p(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * p(a, b - 1);
    }
}

int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF)
    {
        printf("%d\n", positive(p(a, b) - p(b, a)));
    }

    return 0;
}
