#include <stdio.h>
#include <math.h>

int main()
{
    int T; // 数据的组数
    int a, b;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d", &a, &b); // 每组数据读入两个正整数
        printf("%d\n", a + b - abs(a - b) - 1);
    }
    return 0;
}