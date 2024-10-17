#include <stdio.h>

// 判断是否为半素数
int isPrime(int n)
{
    int count = 0;
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) // 如果n能被i整除
        {
            count++; // 计数器加1
        }
    }
    if (count == 0) // 如果计数器为0，说明n只能被1和n整除，是素数
    {
        return 1;
    }
    else if (count <= 2) // 如果计数器为1或2，说明n能被一个数（此时n为平方数）或两个数整除，是半素数
    {
        return 2;
    }
    else // 否则不是素数也不是半素数
    {
        return 0;
    }
}

int main()
{
    int n;
    scanf("%d", &n);                 // 输入n
    for (int i = 1; i <= n / 2; i++) // 遍历1到n/2
    {
        if ((isPrime(i) == 1 && isPrime(n - i) == 1) || (isPrime(i) == 1 && isPrime(n - i) == 2) || (isPrime(i) == 2 && isPrime(n - i) == 1))
        {
            // 如果i和n-i都是素数，或者其中一个是半素数，输出结果
            printf("%d+%d: %d=%d+%d\n", isPrime(i), isPrime(n - i), n, i, n - i);
        }
    }

    return 0;
}