#include <stdio.h>

// 阶乘函数
int factorial(int n)
{
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

// 双阶乘函数
int doubleFactorial(int n)
{
    return (n <= 0) ? 1 : n * doubleFactorial(n - 2);
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d %d\n", factorial(a), doubleFactorial(b));
    if (factorial(a) > doubleFactorial(b))
    {
        printf("a!>b!!\n");
    }
    else if (factorial(a) < doubleFactorial(b))
    {
        printf("a!<b!!\n");
    }
    else
    {
        printf("a!=b!!\n");
    }

    return 0;
}
