#include <stdio.h>

int main()
{
    int n, hours, minutes;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &hours, &minutes);
        if ((hours == 6 && minutes >= 10) || (hours >= 7 && hours <= 21) || (hours == 22 && minutes <= 20))
        {
            printf("N\n");
        }
        else
        {
            printf("E\n");
        }
    }

    return 0;
}
