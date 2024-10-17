#include <stdio.h>
#include <math.h>

// 计算椭圆离心率的函数
void eccentricity(double a, double b)
{
    double max = a > b ? a : b;
    printf("%.2lf ", sqrt(fabs(a * a - b * b)) / max);
}

int main()
{
    double p[9] = {0};
    for (int i = 1; i < 9; i++)
    {
        scanf("%lf", &p[i]);
    }

    eccentricity(p[1], p[5]);
    eccentricity(p[3], p[1]);
    eccentricity(p[7], p[6]);
    eccentricity(p[2], p[4]);
    eccentricity(p[8], p[3]);

    return 0;
}
