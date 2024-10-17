#include <stdio.h>
#include <math.h>

// 用于交换数字
void swap(double *a, double *b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
}

// 用于比较三个数的大小，并按升序排列
void sortThreeNumbers(double *a, double *b, double *c)
{
    if (*a > *b)
    {
        swap(a, b);
    }
    if (*a > *c)
    {
        swap(a, c);
    }
    if (*b > *c)
    {
        swap(b, c);
    }
}

int main()
{
    double x1, y1; // 第一个点的坐标
    double x2, y2; // 第二个点的坐标
    double x3, y3; // 第三个点的坐标

    double d12, d23, d13; // 点之间的距离

    // 分别输入三个点的坐标
    scanf("%lf%lf", &x1, &y1);
    scanf("%lf%lf", &x2, &y2);
    scanf("%lf%lf", &x3, &y3);

    // 计算点之间的距离
    d12 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    d23 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    d13 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    // 确定最长的边
    double l1 = d12, l2 = d23, l3 = d13; // 用于存储最长的边

    sortThreeNumbers(&l1, &l2, &l3);

    // 应用余弦定理，算出最长边对应角的角度
    double angle = acos((pow(l1, 2) + pow(l2, 2) - pow(l3, 2)) / (2 * l1 * l2));

    // 计算多边形的边数
    int n = 2 * acos(-1) / (acos(-1) - angle);

    // 输出周长
    printf("%.6lf", n * l1);

    return 0;
}
