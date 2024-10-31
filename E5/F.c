#include <stdio.h>
#include <math.h>
#define eps 1e-8

static double x_1, x_2, y_1, y_2;
static int s_1, s_2;

// 原来的函数
double f(double x)
{
    return sqrt(pow(x_1 - x, 2) + pow(y_1, 2)) * s_1 + sqrt(pow(x_2 - x, 2) + pow(y_2, 2)) * s_2;
}

// 三分法求函数极值
void TrisectionMethod(double l, double r)
{
    double mid1 = (2 * l + r) / 3;
    double mid2 = (l + 2 * r) / 3;
    while (r - l > eps)
    {
        if (f(mid1) > f(mid2))
        {
            // 此时供水站只可能在区间[mid1, r]上
            l = mid1;
        }
        else
        {
            // 此时供水站只可能在区间[l, mid2]上
            r = mid2;
        }
        mid1 = (2 * l + r) / 3;
        mid2 = (l + 2 * r) / 3;
    }
    printf("%.3lf %.3lf", mid1, f(mid1));
}

int main()
{
    scanf("%lf%lf%lf%lf", &x_1, &y_1, &x_2, &y_2);
    scanf("%d%d", &s_1, &s_2);

    TrisectionMethod(x_1, x_2);

    return 0;
}
