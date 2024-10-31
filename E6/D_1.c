#include <stdio.h>

int main()
{
    char x;
    int sum = 0, n;
    while (scanf("%c", &x) != EOF)
    {
        if (scanf("%d", &n) != 1)
        {
            n = 1;
        }
        if (x == 'C')
        {
            sum += n * 12;
        }
        else if (x == 'H')
        {
            sum += n * 1;
        }
        else if (x == 'O')

        {
            sum += 16 * n;
        }
        else if (x == 'N')
        {
            sum += 14 * n;
        }
    }
    printf("%d", sum);
    
    return 0;
}