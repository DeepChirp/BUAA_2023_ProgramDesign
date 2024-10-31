#include <stdio.h>
#include <math.h>
#define eps 1e-8

double f(double w)
{
    return w * exp(w);
}

void dichotomy(double x)
{
    double l = -1.0, r = 10.0;
    double mid = (l + r) / 2;
    while (r - l > eps)
    {
        if (f(mid) > x)
        {
            // 此时w只可能在区间 [l, mid] 中
            r = mid;
        }
        else
        {
            // 此时w只可能在区间 [mid, r] 中
            l = mid;
        }
        mid = (l + r) / 2;
    }
    printf("%.6lf\n", mid);
}

int main()
{
    double x;
    scanf("%lf", &x);

    dichotomy(x);

    return 0;
}
