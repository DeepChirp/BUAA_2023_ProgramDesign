#include <stdio.h>

int main()
{
    int h;
    scanf("%d", &h);
    int h1 = h * 2 / 3;
    int h2 = h / 3;
    int w = h2 / 4 * 2 + 1;
    int space = (2 * h1 - 1 - w) / 2;
    for (int i = 0; i < h1; i++)
    {
        for (int j = 0; j < h1 - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < h2; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < w; j++)
        {
            printf("|");
        }
        printf("\n");
    }
    return 0;
}