#include <stdio.h>

int main()
{
    unsigned int a, b, c;
    while (scanf("%u%u%u", &a, &b, &c) != EOF)
    {
        printf("%u\n", a ^ b ^ c);
    }

    return 0;
}
