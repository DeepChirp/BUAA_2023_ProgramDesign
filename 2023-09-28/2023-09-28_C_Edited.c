#include <stdio.h>

int main()
{
    int n;
    unsigned int v;
    unsigned int h, l;

    scanf("%d", &n);
    while (n--)
    {
        scanf("%u", &v);
        h = v & 0xFFFF0000;
        l = v & 0x0000FFFF;
        printf("%u\n", (h >> 16) | (l << 16));
    }

    return 0;
}
