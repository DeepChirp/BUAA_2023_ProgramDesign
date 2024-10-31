#include <stdio.h>

int distance(unsigned int a, unsigned int b)
{
    unsigned int c = (a ^ b);
    int result = 0;
    for (int i = 0; i < 32; i++)
    {
        if (((1 << i) & c) != 0)
        {
            result++;
        }
    }
    return result;
}

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    unsigned int x, y, z;

    while (scanf("%u%u%u", &x, &y, &z) != EOF)
    {
        int distant_xy = distance(x, y);
        int distant_xz = distance(x, z);
        int distant_yz = distance(y, z);
        int result = max(max(distant_xy, distant_xz), distant_yz);
        printf("%d\n", result);
    }

    return 0;
}
