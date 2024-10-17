#include <stdio.h>

int main()
{
    int a1, a2, a3; // 基础兴奋值
    int b1, b2, b3; // 基础愉悦值
    scanf("%d%d%d%d%d%d", &a1, &b1, &a2, &b2, &a3, &b3);

    int op;
    scanf("%d", &op);

    int sum = 0;

    // 计算游玩结束后小牛的愉悦值
    if (op == 1)
    {
        sum = a1 * b1 + (a1 + a2) * b2 + (a1 + a2 + a3) * b3;
    }

    if (op == 2)
    {
        sum = a2 * b2 + (a2 + a3) * b3 + (a2 + a3 + a1) * b1;
    }

    if (op == 3)
    {
        sum = a3 * b3 + (a3 + a2) * b2 + (a3 + a2 + a1) * b1;
    }

    // 输出
    printf("%d", sum);

    return 0;
}
