#include <stdio.h>

int main()
{
    int n;
    int i = 0;
    scanf("%d", &n);
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = n * 3 + 1;
        }
        i++;
    }
    printf("%d", i);
    return 0;
}