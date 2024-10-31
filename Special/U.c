#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t a;

    while (scanf("%u", &a) != EOF)
    {
        uint32_t count = 0;
        uint32_t mask = 1;

        while (mask != 0)
        {
            if ((a & mask) == 0)
            {
                count += mask;
            }
            mask <<= 1;
        }

        printf("%u\n", count);
    }

    return 0;
}