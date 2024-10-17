#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    // 原题即可转换为 x^x<10^n。两边取对数，得到 x*lgx<n
    // 使用二分法求解
    int left = 1;
    int right = n > 10 ? n : (n + 1); // 当n<10时，有x<10，则log10(x)<1，此时上界不太好判断，故直接取n+1
    while (left < right)
    {
        int mid = ((long long)left + right + 1) / 2; // 使用long long，防止溢出
        if (mid * log10(mid) < n)
        {
            left = mid;
        }
        else
        {
            right = mid - 1;
        }
    }

    printf("%d", left);

    return 0;
}
