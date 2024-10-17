#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 将字符 c 转换为对应的数字
int charToDigit(char c)
{
    if (c >= '0' && c <= '9')
    {
        return c - '0';
    }
    else if (c >= 'A' && c <= 'Z')
    {
        return 10 + c - 'A';
    }
    return -1; // 非法字符
}

// 将数字 digit 转换为对应的字符
char digitToChar(int digit)
{
    if (digit >= 0 && digit <= 9)
    {
        return digit + '0';
    }
    else if (digit >= 10 && digit <= 35)
    {
        return digit - 10 + 'A';
    }
    return '\0'; // 非法数字
}

// 将输入的整数从原始进制 base 转换为目标进制 targetBase
void convertBase(char *num, int base, int targetBase)
{
    int len = strlen(num);
    long long int decimal = 0;

    // 将原始进制的整数转换为十进制
    int sign = 1;
    int startIndex = 0;
    if (num[0] == '-')
    {
        sign = -1;
        startIndex = 1;
    }
    for (int i = startIndex; i < len; i++)
    {
        int digit = charToDigit(num[i]);
        decimal = decimal * base + digit;
    }

    decimal *= sign; // 考虑符号

    // 将十进制转换为目标进制的字符串
    char result[100]; // 存储转换后的结果
    int index = 0;
    while (decimal != 0)
    {
        int remainder = decimal % targetBase;
        if (remainder < 0)
        {
            remainder -= targetBase; // 处理负余数
        }
        result[index++] = digitToChar(remainder);
        decimal = (decimal - remainder) / targetBase;
    }

    // 输出转换后的结果
    if (index == 0)
    {
        printf("0\n"); // 处理输入为零的情况
    }
    else
    {
        if (sign == -1)
        {
            printf("-");
        }
        for (int i = index - 1; i >= 0; i--)
        {
            printf("%c", result[i]);
        }
        printf("\n");
    }
}

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int base, targetBase;
        char num[100];
        scanf("%d %d s", &base, &targetBase, num);
        convertBase(num, base, targetBase);
    }

    return 0;
}