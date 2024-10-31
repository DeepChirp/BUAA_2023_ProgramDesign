#include <stdio.h>

// 递归实现的约瑟夫问题
// n: 圆圈中的人数
int lastRemaining(int n)
{
    // 最小子问题，圆圈中只有一个人时，返回该人的索引1
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return 2 * (1 + n / 2 - lastRemaining(n / 2));
    }
    //  1 2 3 4 5 6 7
    //    2   4   6
    // 2*(1   2   3  )
    // 相当于下一轮的
    //   (3   2   1  )
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", lastRemaining(n));

    return 0;
}
