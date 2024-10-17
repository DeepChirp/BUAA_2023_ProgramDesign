#include <stdio.h>

// m: 汉诺塔的层数 n: 第几步
long long findDisk(long long m, long long n)
{
    if (m == 1)
    {
        return 1;
    }

    long long totalMoves = (1LL << m) - 1;   // 总移动步数，等于2的m次方减1
    long long midPoint = totalMoves / 2 + 1; // 中间步数，即m层汉诺塔移动到目标柱子的步数

    if (n == midPoint)
    {
        return m;
    }
    else if (n < midPoint)
    {
        return findDisk(m - 1, n);
    }
    else // n > midpoint
    {
        return findDisk(m - 1, n - midPoint);
    }
}

int main()
{
    long long m, n;
    while (scanf("%lld%lld", &m, &n) != EOF)
    {
        printf("%lld\n", findDisk(m, n));
    }

    return 0;
}