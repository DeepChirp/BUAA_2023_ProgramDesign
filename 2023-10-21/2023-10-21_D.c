#include <stdio.h>

// 判断三角形的类型
void triangle(int i, int a, int b, int c)
{
    printf("Question %d:\n", i);

    // 将三个数从小到大排序
    int t;
    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (a > c)
    {
        t = a;
        a = c;
        c = t;
    }
    if (b > c)
    {
        t = b;
        b = c;
        c = t;
    }

    // 是否能构成三角形
    if (a + b <= c)
    {
        printf("no triangle\n");
        return;
    }

    // 判断三角形角的关系
    int temp = a * a + b * b - c * c;
    // 锐角三角形
    if (temp > 0)
    {
        printf("acute triangle\n");
    }
    // 直角三角形
    else if (temp == 0)
    {
        printf("right triangle\n");
    }
    // 钝角三角形
    else
    {
        printf("obtuse triangle\n");
    }

    // 判断三角形边的关系
    if ((a == b) && (b == c) && (a == c))
    {
        printf("equilateral triangle\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("isosceles triangle\n");
    }
}

int main()
{
    int length[11];

    // 输入
    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &length[i]);
    }

    // 输出
    triangle(1, length[1], length[5], length[9]);
    triangle(2, length[2], length[7], length[10]);
    triangle(3, length[2], length[3], length[6]);
    triangle(4, length[8], length[9], length[10]);
    triangle(5, length[6], length[7], length[10]);
    triangle(6, length[3], length[4], length[8]);
    triangle(7, length[1], length[2], length[6]);

    return 0;
}
