#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    int m = x / y;
    int n = x % y;
    printf("%d\n%d", m, n);
    return 0;
}
