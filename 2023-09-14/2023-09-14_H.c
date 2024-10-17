#include <stdio.h>

int main()
{
    int T, a, b;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d%d", &a, &b);
        int min = b / (a - b + 1);
        if (min == 0 & b != 0)
        {
            min = 1;
        }
        printf("%d %d\n", b, min);
    }
}