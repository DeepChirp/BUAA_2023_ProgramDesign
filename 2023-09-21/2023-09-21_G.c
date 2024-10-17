#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("infinite solutions\n"); // 无穷多解
            }
            else
            {
                printf("No real root\n"); // 无实根
            }
        }
        else
        {
            double root = -c / (double)b;
            printf("%.2lf\n", root); // 唯一实根
        }
    }
    else
    {
        int delta = b * b - 4 * a * c;
        if (delta < 0)
        {
            printf("No real root\n"); // 无实根
        }
        else if (delta == 0)
        {
            double root = -b / (2.0 * a);
            printf("%.2lf\n", root); // 唯一实根
        }
        else
        {
            double root1 = (-b + sqrt(delta)) / (2.0 * a);
            double root2 = (-b - sqrt(delta)) / (2.0 * a);
            // 不同实根，按从小到大输出
            if (root1 < root2)
            {
                printf("%.2lf %.2lf\n", root1, root2);
            }
            else
            {
                printf("%.2lf %.2lf\n", root2, root1);
            }
        }
    }

    return 0;
}