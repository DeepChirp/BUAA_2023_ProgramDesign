#include <stdio.h>
#include <math.h>

int i, j;
void print_fractal(int x1, int x2, int y1, int y2)
{
    if (abs(x1 - x2) <= 1)
        printf("1");
    else
    {
        if (i >= (3 * x1 + x2) / 4 + 1 && i <= (x1 + 3 * x2) / 4 && j >= (3 * y1 + y2) / 4 + 1 && j <= (y1 + 3 * y2) / 4)
        {
            printf(" ");
        }
        else
        {
            if (i >= x1 && i <= (x1 + x2) / 2 && j >= y1 && j <= (y1 + y2) / 2)
                print_fractal(x1, (x1 + x2) / 2, y1, (y1 + y2) / 2);
            if (i >= (x1 + x2) / 2 + 1 && i <= x2 && j >= y1 && j <= (y1 + y2) / 2)
                print_fractal((x1 + x2) / 2 + 1, x2, y1, (y1 + y2) / 2);
            if (i >= x1 && i <= (x1 + x2) / 2 && j >= (y1 + y2) / 2 + 1 && j <= y2)
                print_fractal(x1, (x1 + x2) / 2, (y1 + y2) / 2 + 1, y2);
            if (i >= (x1 + x2) / 2 + 1 && i <= x2 && j >= (y1 + y2) / 2 + 1 && j <= y2)
                print_fractal((x1 + x2) / 2 + 1, x2, (y1 + y2) / 2 + 1, y2);
        }
    }
}

int main()
{
    int k;
    scanf("%d", &k);
    for (i = 1; i <= (1 << (k + 1)); i++)
    {
        for (j = 1; j <= (1 << (k + 1)); j++)
        {
            print_fractal(1, (1 << (k + 1)), 1, (1 << (k + 1)));
        }
        printf("\n");
    }
}