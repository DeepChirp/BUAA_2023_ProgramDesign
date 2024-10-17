#include <stdio.h>
#include <math.h>

// 判断是否为质数
int is_prime(int num)
{
    if (num < 2)
        return 0;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

// 返回指定位的质数
unsigned long long prime(int number)
{
    int count = 0;
    long long prime = 0;
    long long num = 2;
    while (count < number)
    {
        if (is_prime(num))
        {
            count++;
            if (count == number)
            {
                prime = num;
                break;
            }
        }
        num++;
    }
    return prime;
}

int main()
{
    int m, n;
    unsigned long long prime_m, prime_n;

    while (scanf("%d %d", &m, &n) != EOF)
    {
        prime_m = prime(m);
        prime_n = prime(n);

        if ((prime_m ^ prime_n) == 1)
        {
            printf("YEEEEE!!!\n");
        }
        else
        {
            printf("W00000!!!\n");
        }
    }

    return 0;
}