#include <stdio.h>

int popcount(int x)
{
    int count = 0;
    while (x)
    {
        count += x & 1;
        x >>= 1;
    }
    return count;
}

int f(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }
    int g = a & b;
    int p = a ^ b;
    return popcount(g) + f(p, 2 * g);
}

int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        printf("%d\n", f(a, b));
    }
    return 0;
}