#include <stdio.h>

int main()
{
    int T, a, b;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d%d", &a, &b);
        printf("%d %d\n", b, a / (a - b + 1));
    }
}