#include <stdio.h>
#include <string.h>

// 将其他进制的数转换为十进制数
int convert_base(unsigned long long num, int base)
{
    unsigned long long dec = 0; // 存储变量num在十进制的情况下所表示的数
    int pow = 1;                // 避免使用pow函数，以防浮点精度带来的问题

    while (num)
    {
        // 逐位读取num，并将其转换为十进制
        dec += (num % 10) * pow;
        num /= 10;
        pow *= base;
    }

    return dec;
}

// 获得一段数中的最大数字
int findMaxDigit(unsigned long long number)
{
    // 将数转换为字符串
    char str[20];
    sprintf(str, "%d", number);

    int length = strlen(str);
    int maxDigit = 0;

    // 遍历每个字符并找到最大数字
    for (int i = 0; i < length; i++)
    {
        int digit = str[i] - '0'; // 将字符转换为数字
        if (digit > maxDigit)
        {
            maxDigit = digit; // 更新最大数字
        }
    }

    return maxDigit;
}

// 寻找三个数中的最大数
int findMax(unsigned long long a, unsigned long long b, unsigned long long c)
{
    int max = (a > b) ? a : b;
    max = (c > max) ? c : max;

    return max;
}

int main()
{
    unsigned long long a, b, c;
    int base = 0;
    scanf("%llu%llu%llu", &a, &b, &c);

    for (int i = findMax(findMaxDigit(a), findMaxDigit(b), findMaxDigit(c)) + 1; i <= 16; i++)
    {
        unsigned long long a_dec = convert_base(a, i);
        unsigned long long b_dec = convert_base(b, i);
        unsigned long long c_dec = convert_base(c, i);
        if (a_dec * b_dec == c_dec)
        {
            base = i;
            break;
        }
    }

    printf("%d\n", base);

    return 0;
}