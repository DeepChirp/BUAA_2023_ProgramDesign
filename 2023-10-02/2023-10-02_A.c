#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, z;
    scanf("%d", &x);

    if (x & 1) // x为奇数
    {
        y = pow(x, 2) / 2;
        z = pow(x, 2) / 2 + 1;
    }
    else
    {
        y = pow(x / 2, 2) - 1;
        z = pow(x / 2, 2) + 1;
    }

    printf("%d %d %d\n", x, y, z);

    return 0;
}
