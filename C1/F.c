#include <stdio.h>

int main()
{
    int n = 0, a, num = 0, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a != 0)
        {
            sum += a;
            num++;
        }
    }
    if (sum == 0)
    {
        printf("Oh!No!");
    }
    else
    {
        printf("%d", sum / num);
    }
}