#include <stdio.h>
// 把算过的数存在数组中
static int arr[26][26][26] = {0};

int f(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return 1;
    }
    else if (a > 25 || b > 25 || c > 25)
    {
        return f(25, 25, 25);
    }
    // 如果已经算过，直接返回
    else if (arr[a][b][c] != 0)
    {
        return arr[a][b][c];
    }
    else if (a < b && b < c)
    {
        arr[a][b][c] = f(a, b, c - 1) + f(a, b - 1, c - 1) - f(a, b - 1, c);
        return arr[a][b][c];
    }
    else
    {
        arr[a][b][c] = f(a - 1, b, c) + f(a - 1, b - 1, c) + f(a - 1, b, c - 1) - f(a - 1, b - 1, c - 1);
        return arr[a][b][c];
    }
}

int main()
{
    // 指定循环次数
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        printf("%d\n", f(a, b, c));
    }

    return 0;
}
