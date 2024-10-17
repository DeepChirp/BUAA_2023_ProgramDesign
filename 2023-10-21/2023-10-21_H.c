#include <stdio.h>

/*
int stone(int n)
{
    int sum = 0;
    if (n <= 2)
    {
        return 0;
    }

    sum += stone((n - 1) / 2);
    sum++;
    sum += stone(n / 2);
    return sum;
}
*/
long long stone(long long n)
{
    // 边界情况处理
    if (n <= 2)
    {
        return 1;
    }
    else if (n == 3)
    {
        return 2;
    }

    // n为偶数
    if (n % 2 == 0)
    {
        return (stone(n / 2) + stone(n / 2 + 1) - 1);
    }
    // n为奇数
    else
    {
        return (2 * stone((n + 1) / 2) - 1);
    }
}

int main()
{
    long long m, n;
    scanf("%lld%lld", &m, &n);

    long long num1 = stone(m);
    long long num2 = stone(n);

    /*
        int num1 = m > 2 ? stone(m - 2) + 2 : 1; // 每行的能量石数
        int num2 = n > 2 ? stone(n - 2) + 2 : 1; // 每列的能量石数
    */

    long long live = num1 * n + num2 * m - num1 * num2; // 恢复生机的土地数

    printf("%lld\n", num1 * num2);
    printf("%lld\n", live);
    printf("%lld\n", m * n - live);

    return 0;
}
