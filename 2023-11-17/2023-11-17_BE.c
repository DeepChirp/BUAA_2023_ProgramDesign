#include <stdio.h>
#include <string.h>

int main()
{
    // 指定循环次数
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int m,n;
        scanf("%d%d", &n, &m);
        int a[n];
        memset(a, 0, sizeof(a));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        
    }


    return 0;
}
