#include <stdio.h>
#include <math.h>

// 输出格雷码，n为位数，i为第几个格雷码
void GrayCode(int n, int i)
{
    // 处理边缘情况
    if (n == 1)
    {
        if (i == 1)
        {
            putchar('0');
            putchar('\n');
        }
        else // if (i == 2)
        {
            putchar('1');
            putchar('\n');
        }
        return;
    }

    //(n+1)位格雷码中的前2^n个码字等于n位格雷码的码字，按顺序书写，加前缀0
    if (i <= pow(2, n - 1))
    {
        putchar('0');       // 加前缀0
        GrayCode(n - 1, i); // 按顺序书写
    }
    //(n+1)位格雷码中的后2^n个码字等于n位格雷码的码字，按逆序书写，加前缀1
    else
    {
        putchar('1');                       // 加前缀1
        GrayCode(n - 1, pow(2, n) - i + 1); // 按逆序书写
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    // 有n位位数的时候，一共有2^n个格雷码
    for (int i = 1; i <= pow(2, n); i++)
    {
        GrayCode(n, i);
    }

    return 0;
}
