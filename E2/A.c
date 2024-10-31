#include <stdio.h>
#include <math.h>

int main()
{
    double r, a;
    scanf("%lf%lf", &r, &a);

    printf("%.1lf %.1lf", r * cos(a), r * sin(a));

    return 0;
}