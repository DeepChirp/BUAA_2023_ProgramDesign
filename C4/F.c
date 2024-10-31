#include <stdio.h>
int main()
{
    int p, q;
    scanf("%d%d", &p, &q);
    while (q != 0)
    {
        printf("%d ", p / q); // 输出a_0
        int t = p % q;
        p = q; // 更新p为q
        q = t; // 更新q为p%q
    }
    return 0;
}
