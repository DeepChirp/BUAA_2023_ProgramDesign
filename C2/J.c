#include <stdio.h>
#include <string.h>

int main()
{
    long long num;
    long long sum = 0;
    scanf("%lld", &num);
    for (long long i = 1; i <= num; i++)
    {
        char str[20];
        sprintf(str, "%d", i);

        int product = 1;
        for (int i = 0; i < strlen(str); i++)
        {
            int digit = str[i] - '0';
            if (digit != 0)
            {
                product *= digit;
            }
        }
        sum += product;
    }
    printf("%lld", sum % 1000000007);

    return 0;
}