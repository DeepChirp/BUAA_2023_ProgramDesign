#include <stdio.h>

int main()
{
    int n;
    unsigned int num;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%u", &num);
        unsigned int temp = num >> 16;
        printf("%u\n", temp + (num << 16));
    }

    return 0;
}
