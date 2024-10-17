#include <stdio.h>

int josephus(int n, int k)
{
    if (n == 1)
    {
        return 1; // 只剩下一个人时，返回编号为 1 的人
    }
    else
    {
        // 根据递推关系式求解约瑟夫问题
        return (josephus(n - 1, k) + k - 1) % n + 1;
    }
}

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);

    printf("%d\n", josephus(n, k));

    return 0;
}