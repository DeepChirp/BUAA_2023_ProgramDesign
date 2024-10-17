#include <stdio.h>

void ExGCD(int a, int b, int *d, int *x, int *y)
{
    if (b == 0)
    {
        // 将(a,1,0)分别赋给d,x,y指向的变量
        *d = a;
        *x = 1;
        *y = 0;
        return;
    }
    int dd, xx, yy; // 分别代表伪代码中的d',x',y'
    // 根据伪代码，调用ExGCD，传入dd,xx,yy的【地址】获得计算结果
    ExGCD(b, a % b, &dd, &xx, &yy);
    // 根据伪代码进行计算，并赋给d,x,y指向的变量
    *d = dd;
    *x = yy;
    *y = (xx - a / b * yy);
}

int main()
{
    int a, b, d, x, y;
    // 读入
    scanf("%d%d", &a, &b);
    // 调用ExGCD函数，传入d,x,y的【地址】获得计算结果
    ExGCD(a, b, &d, &x, &y);
    // 输出
    printf("%d = %d*(%d) + %d*(%d)\n", d, a, x, b, y);

    return 0;
}