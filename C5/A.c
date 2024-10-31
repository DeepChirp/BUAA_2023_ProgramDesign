#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    while (scanf("%lf", &x) != EOF)
    {
        printf("%.3lf\n", exp(cos(atan(x))) / log(cosh(x) + 1));
    }

    return 0;
}
