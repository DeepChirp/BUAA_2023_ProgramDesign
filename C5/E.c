#include <stdio.h>

// Catalan数
int catalan(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += catalan(i) * catalan(n - 1 - i);
        }
        return sum;
    }
}

int main()
{
    // 指定循环次数
    int t, n;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        printf("%d\n", catalan(n));
    }

    return 0;
}
