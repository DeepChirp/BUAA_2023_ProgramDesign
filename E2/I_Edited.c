#include <stdio.h>
#include <math.h>

#define PI acos(-1)

// 计算两点间的距离
double dis(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

// 浮点数判断相等
int feq(double x, double y)
{
    return fabs(x - y) < 1e-2;
}

// 浮点数最大公约数
double fgcd(double x, double y)
{
    if (feq(x, 0))
    {
        return y;
    }
    if (feq(y, 0))
    {
        return x;
    }
    return fgcd(y, fmod(x, y));
}

int main()
{
    //   int n;         // 用于存储边数
    //   double length; // 用于存储边长
    // 依次输入点的坐标
    double arr[4][2];
    for (int i = 1; i <= 3; i++)
    {
        scanf("%lf %lf", &arr[i][0], &arr[i][1]);
    }
    double a, b, c;

    // 计算三边长度
    a = dis(arr[1][0], arr[1][1], arr[2][0], arr[2][1]);
    b = dis(arr[2][0], arr[2][1], arr[3][0], arr[3][1]);
    c = dis(arr[1][0], arr[1][1], arr[3][0], arr[3][1]);

    // 保证c存储的是最大的边长，从而确保A与B均为锐角
    if (a > c)
    {
        double temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        double temp = b;
        b = c;
        c = temp;
    }

    // 计算半径
    double p = (a + b + c) / 2.0;
    double s = sqrt(p * (p - a) * (p - b) * (p - c)); // 海伦公式
    double r = (a * b * c) / (4.0 * s);

    // 计算三边对应圆心角的公约数
    double A = 2 * asin(a / (2 * r));
    double B = 2 * asin(b / (2 * r));
    double C = 2 * PI - A - B;
    double D;
    D = fgcd(A, B);
    D = fgcd(D, C);

    // 输出数据
    //   n = round(2 * PI / D);
    //   length = (double)sqrt(2 * pow(r, 2) * (1 - cos(D)));
    printf("%.6lf", 2 * PI / D * sqrt(2 * pow(r, 2) * (1 - cos(D))));

    return 0;
}